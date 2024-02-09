/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:37:14 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/14 22:17:39 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*src;
	size_t		needle_len;

	needle_len = ft_strlen(needle);
	src = haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*src != '\0' && needle_len <= len)
	{
		if (ft_strncmp(src, needle, needle_len) == 0)
			return ((char *) src);
		src++;
		len--;
	}
	return (NULL);
}
