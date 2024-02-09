/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:57:19 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/14 22:39:59 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	end;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	end = len - 1;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
	{
		end--;
	}
	s1 = ft_substr(s1, 0, end + 1);
	return ((char *)s1);
}
