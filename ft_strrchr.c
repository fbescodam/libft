/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 20:02:34 by fbes          #+#    #+#                 */
/*   Updated: 2020/11/03 16:33:58 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		if (s[i - 1] == c)
			return ((char *)&s[i - 1]);
		i--;
	}
	return (NULL);
}
