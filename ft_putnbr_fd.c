/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 18:42:02 by fbes          #+#    #+#                 */
/*   Updated: 2020/11/01 18:02:44 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_nbr(char digits[10], int size, int fd)
{
	int		first_dig_fnd;
	int		i;

	first_dig_fnd = 0;
	i = 0;
	while (i < size)
	{
		if (digits[i] != 48 || first_dig_fnd > 0 || i == size - 1)
		{
			write(fd, &digits[i], 1);
			first_dig_fnd = 1;
		}
		i++;
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	digits[10];

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	i = 9;
	while (i > -1)
	{
		digits[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	write_nbr(digits, sizeof(digits), fd);
}
