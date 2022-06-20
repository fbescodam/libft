/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 20:06:31 by fbes          #+#    #+#                 */
/*   Updated: 2022/04/09 00:40:28 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Duplicate a string in newly allocated memory
 * @param[in] *src		The source to copy from
 * @return			A pointer to the copy, NULL on error
 */
char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;

	dest = ft_stralloc(ft_strlen(src));
	if (dest)
	{
		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
