/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 20:10:12 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/27 14:49:04 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	unsigned int	found_len;
	unsigned int	to_find_len;
	unsigned int	i;

	to_find_len = 0;
	while (sub[to_find_len] != '\0')
		to_find_len++;
	if (to_find_len == 0)
		return ((char *)str);
	found_len = 0;
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == sub[found_len])
			found_len++;
		else if (found_len != to_find_len)
			found_len = 0;
		else
			break ;
		i++;
	}
	if (found_len == to_find_len)
		return ((char *)&str[i - found_len]);
	return (NULL);
}
