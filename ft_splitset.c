/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_splitset.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:55:07 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/28 15:06:51 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_c_is_sep(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_sep_amount(char const *s, char const *set)
{
	size_t	sep_amount;
	size_t	i;

	sep_amount = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_c_is_sep(set, s[i]))
			sep_amount++;
		i++;
	}
	return (sep_amount);
}

/*
** ft_ssi is the function which gets run in the inner loop of ft_splitset below
** in order to keep the code norminette compliant
*/

static void		ft_ssi(char const *s, char const *set, size_t i[4], char **res)
{
	if (s[i[0] + 1] == '\0' && !ft_c_is_sep(set, s[i[0]]))
		i[2]++;
	if ((ft_c_is_sep(set, s[i[0]]) || s[i[0] + 1] == '\0') && i[2] > 0)
	{
		res[i[1]] = ft_substr(s, i[3], i[2]);
		i[2] = 0;
		i[3] = i[0] + 1;
		i[1]++;
	}
	else if (!ft_c_is_sep(set, s[i[0]]))
		i[2]++;
	else
		i[3] = i[0] + 1;
	i[0]++;
}

char			**ft_splitset(char const *s, char const *set)
{
	char	**res;
	size_t	i[4];

	res = (char **)malloc(sizeof(char *) * (ft_sep_amount(s, set) + 1));
	if (res)
	{
		i[0] = 0;
		i[1] = 0;
		i[2] = 0;
		i[3] = 0;
		if (ft_strlen(s) > 0)
			while (s[i[0]] != '\0')
				ft_ssi(s, set, i, res);
		res[i[1]] = 0;
	}
	return (res);
}
