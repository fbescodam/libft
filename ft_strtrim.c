/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:10:24 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/27 15:35:25 by fbes          ########   odam.nl         */
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
	while (s1_len >= 0)
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

char	*ft_strtrimstr(char const *s1, char const *s2)
{
	char			*dest;
	size_t			dest_len;
	size_t			s2_len;
	char			*ptr;
	unsigned int	start;

	dest_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	start = 0;
	if (ft_strnstr(s1, s2, s2_len))
	{
		dest_len -= s2_len;
		start = (unsigned int)s2_len;
	}
	ptr = (char *)s1 + ft_strlen(s1) - s2_len;
	if (ft_strnstr(ptr, s2, s2_len))
		dest_len -= s2_len;
	dest = ft_substr(s1, start, dest_len);
	return (dest);
}
