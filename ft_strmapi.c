/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 13:18:29 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/28 13:23:57 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	res = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (res)
	{
		i = 0;
		while (s[i] != '\0')
		{
			res[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return (res);
}
