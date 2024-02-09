/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:56:35 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/17 19:52:52 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*result;
	int		i;
	int		substrlen;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= (unsigned int)s_len)
		return (ft_strdup(""));
	substrlen = len;
	if (start + len > s_len)
		substrlen = s_len - start;
	result = (char *)malloc((substrlen + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < substrlen)
	{
		result[i] = s[start + i];
		i++;
	}
	result[substrlen] = '\0';
	return (result);
}
