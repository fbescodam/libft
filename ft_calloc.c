/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 21:00:09 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 21:27:08 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void			*ptr;
	unsigned int	size_to_malloc;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	size_to_malloc = size * nmemb;
	ptr = malloc(size_to_malloc);
	if (ptr)
		ft_bzero(ptr, size_to_malloc);
	return (ptr);
}
