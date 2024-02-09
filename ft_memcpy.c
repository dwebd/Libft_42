/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:19:03 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/17 19:43:32 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr1;

	ptr = (char *)src;
	ptr1 = (char *)dst;
	if (!src && !dst)
		return (NULL);
	while (n--)
	{
		*ptr1 = *ptr;
		ptr++;
		ptr1++;
	}
	return (dst);
}
// #include <stdio.h>
// int main()
// {
// 	char src[] = "dianalkjlkj";
// 	char *dst = src + 2;

// 	char *result = ft_memcpy(dst, src, 4);
// 	printf("%s\n", result);


// }
