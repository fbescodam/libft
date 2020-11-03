/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:10:24 by fbes          #+#    #+#                 */
/*   Updated: 2020/11/03 14:28:50 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dest;
	unsigned int	start;
	size_t			dest_len;
	size_t			s1_len;

	s1_len = ft_strlen(s1);
	start = 0;
	while (s1[start] != '\0')
	{
		if (ft_strchr(set, (int)s1[start]))
			start++;
		else
			break ;
	}
	dest_len = s1_len - (size_t)start;
	while (s1_len > 0)
	{
		if (ft_strchr(set, (int)s1[s1_len]))
			dest_len--;
		else
			break ;
		s1_len--;
	}
	dest = ft_substr(s1, start, dest_len + 1);
	return (dest);
}
