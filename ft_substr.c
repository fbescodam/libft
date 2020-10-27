/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 14:13:01 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/27 14:57:33 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	final_len;

	final_len = ft_strlen(s) - (size_t)start;
	if (final_len > len)
		final_len = len;
	dest = (char *)malloc(final_len + 1);
	if (dest)
	{
		i = 0;
		if (start < ft_strlen(s))
		{
			while (i < len)
			{
				dest[i] = s[(size_t)start + i];
				i++;
			}
		}
		dest[i] = '\0';
	}
	return (dest);
}
