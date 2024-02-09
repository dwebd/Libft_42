/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:17:10 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/17 19:43:36 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sc;

	dest = (unsigned char *)dst;
	sc = (unsigned char *)src;
	if (!dest && !sc)
		return (NULL);
	if (dest > sc)
	{
		while (len > 0)
		{
			dest[len - 1] = sc[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char src[] = "dianahhhhhhh";
// 	char *dst = src + 2;

// 	char *result = ft_memmove(dst, src, 4);
// 	printf("%s\n", result);


// }
