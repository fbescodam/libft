/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:00:32 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/27 15:08:59 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc(s1_len + s2_len + 1);
	if (dest)
	{
		ptr = dest;
		ft_memcpy(ptr, s1, s1_len);
		ptr += s1_len;
		ft_memcpy(ptr, s2, s2_len);
		ptr += s2_len;
		*ptr = '\0';
	}
	return (dest);
}
