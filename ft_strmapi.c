/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:57:22 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/17 19:45:30 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	my_fun(unsigned int a, char b)
// {
// 	return ft_toupper(b);
// }

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*new_str;
	size_t	j;

	new_str = ft_strdup(s);
	if (!new_str)
		return (NULL);
	j = 0;
	while (new_str[j])
	{
		new_str[j] = (*f)(j, new_str[j]);
		j++;
	}
	return (new_str);
}
// #include <stdio.h>
// int main()
// {
// 	char s[] = "hello";
// 	char *result = ft_strmapi(s, my_fun);
// 	printf("%s", result);
// }
