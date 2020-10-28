/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:41:13 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/28 15:12:23 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getsepsamount(char const *s, char c)
{
	size_t	amount;
	size_t	i;

	amount = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			amount++;
		i++;
	}
	return (amount);
}

/*
** below function is called in the inner loop of ft_split
** to make this code norminette compliant (fit in 25 lines per function)
*/

static void		ft_spi(char const *s, char c, size_t i[4], char **arr)
{
	if (s[i[0] + 1] == '\0' && s[i[0]] != c)
		i[3] += 1;
	if ((s[i[0]] == c || s[i[0] + 1] == '\0') && i[3] > 0)
	{
		arr[i[1]] = ft_substr(s, i[2], i[3]);
		i[1]++;
		i[2] = i[0] + 1;
		i[3] = 0;
	}
	else if (s[i[0]] != c)
		i[3]++;
	else
		i[2] = i[0] + 1;
	i[0]++;
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i[4];

	arr = (char **)malloc(sizeof(char *) * ft_getsepsamount(s, c) + 1);
	if (arr)
	{
		i[0] = 0;
		i[1] = 0;
		i[2] = 0;
		i[3] = 0;
		if (ft_strlen(s) > 0)
			while (s[i[0]] != '\0')
				ft_spi(s, c, i, arr);
		arr[i[1]] = 0;
	}
	return (arr);
}
