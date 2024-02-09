/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:37:50 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/17 19:43:41 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr = (unsigned char) c;
		ptr++;
	}
	return (b);
}
// #include<stdio.h>
// int main()
// {
// 	char b[] = "hello";
// 	char c = 'a';
// 	char *res = ft_memset(b, c, 3);
// 	printf("%s",res);
// }
