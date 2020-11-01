/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:14:02 by fbes          #+#    #+#                 */
/*   Updated: 2020/11/01 16:59:09 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*src_cpy;
	char			*dest_cpy;

	src_cpy = src;
	dest_cpy = dest;
	if (src + n > dest)
	{
		while (n > 0)
		{
			n--;
			dest_cpy[n] = src_cpy[n];
		}
	}
	else
	{
		while (n > 0)
		{
			*dest_cpy = *src_cpy;
			dest_cpy++;
			src_cpy++;
			n--;
		}
	}
	return (dest);
}
