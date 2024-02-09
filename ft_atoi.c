/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:23:42 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/17 20:56:51 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long		res;
	int			sign;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if ((res == LONG_MAX / 10 && (*str - '0') > LONG_MAX % 10)
			|| res > LONG_MAX / 10)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		res = *str - 48 + (res * 10);
		str++;
	}
	return ((int)res * sign);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("1234"));
}
