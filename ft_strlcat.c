/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:20:23 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/17 19:43:14 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	res;
	size_t	len;

	if (dst == NULL && !dstsize)
		return (ft_strlen(src));

	a = 0;
	len = ft_strlen(dst);
	if (dstsize > len)
	{
		res = ft_strlen(src) + len;
		while (src[a] != '\0' && len < dstsize - 1)
		{
			dst[len] = src[a];
			a++;
			len++;
		}
		dst[len] = '\0';
	}
	else
		res = dstsize + ft_strlen(src);
	return (res);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char *src = NULL;
// 	char *we = strdup("12344");
// 	// printf("%zu \n ", ft_strlcat(NULL ,we, 0));
// 	printf("%zu \n ", strlcat(src ,we , 0));
// }
