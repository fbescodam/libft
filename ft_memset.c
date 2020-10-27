/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:29:31 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/27 14:19:38 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = c;
		copy++;
		n--;
	}
	return (s);
}
