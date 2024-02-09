/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:10:13 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/14 22:37:56 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_check(long int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		count++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*res;
	long int	nbr;
	int			c;

	nbr = n;
	c = digit_check(nbr);
	res = malloc(sizeof(char) * c + 1);
	if (!res)
		return (NULL);
	res[c] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		res[--c] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (res);
}
