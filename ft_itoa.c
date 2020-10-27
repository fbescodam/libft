/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 16:32:18 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/27 17:02:44 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_idigits(int n)
{
	int	digits;

	if (n == -2147483648)
		return (10);
	if (n < 0)
		n *= -1;
	digits = 0;
	while (n > 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		digits;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	digits = ft_idigits(n);
	neg = 0;
	if (n < 0)
	{
		digits++;
		n *= -1;
		neg = 1;
	}
	res = (char *)malloc((digits + 1) * sizeof(char));
	if (res)
	{
		res[digits] = '\0';
		i = digits - 1;
		while (n > 0)
		{
			res[i] = (n % 10) + '0';
			n /= 10;
			i--;
		}
		if (neg)
			res[i] = '-';
	}
	return (res);
}
