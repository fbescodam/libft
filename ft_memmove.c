/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:14:02 by fbes          #+#    #+#                 */
/*   Updated: 2022/02/08 19:48:05 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Copy a certain amount of bytes from one place to another. In case destination
 * and source overlap, special caution is applied so that the copy is done in a
 * non-destructive manner.
 * @param[in] *dest		A pointer to the destination of the copy
 * @param[in] *src		A pointer to the place to copy from
 * @param[in] n			The maximum amount of bytes to copy
 * @return			A pointer to the destination of the copy
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*src_cpy;
	char			*dest_cpy;

	if (dest == NULL && src == NULL)
		return (NULL);
	src_cpy = src;
	dest_cpy = dest;
	if (dest < src)
	{
		while (n > 0)
		{
			*dest_cpy = *src_cpy;
			dest_cpy++;
			src_cpy++;
			n--;
		}
		return (dest);
	}
	while (n > 0)
	{
		dest_cpy[n - 1] = src_cpy[n - 1];
		n--;
	}
	return (dest);
}
