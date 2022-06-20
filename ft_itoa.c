/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 16:32:18 by fbes          #+#    #+#                 */
/*   Updated: 2022/04/09 00:39:55 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_itoad(unsigned int n, int neg, int digits)
{
	char	*res;
	int		i;

	res = ft_stralloc(digits);
	if (res)
	{
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

/**
 * Convert a number of base10 into a string
 * @param[in] n		The number to convert
 * @return		The converted number in string format, NULL on error
 */
char	*ft_itoa(int n)
{
	int		digits;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	digits = ft_numlen((unsigned int)ft_abs(n), 10);
	neg = 0;
	if (n < 0)
	{
		digits++;
		n *= -1;
		neg = 1;
	}
	return (ft_itoad((unsigned int)n, neg, digits));
}
