/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:41:13 by fbes          #+#    #+#                 */
/*   Updated: 2020/11/01 21:53:39 by fbes          ########   odam.nl         */
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
		if (i > 0 && s[i] == c && s[i - 1] != c)
			amount++;
		else if (i > 0 && s[i] != c && s[i + 1] == '\0')
			amount++;
		i++;
	}
	return (amount);
}

static char		**ft_getpartsstart(char const *s, char c, size_t amount)
{
	size_t	i;
	size_t	j;
	char	**ret;

	ret = (char **)malloc((amount + 1) * sizeof(char *));
	if (ret)
	{
		i = 0;
		j = 0;
		while (s[i] != '\0')
		{
			if (i == 0 && s[i] != c)
			{
				ret[j] = (char *)&s[i];
				j++;
			}
			else if (i > 0 && s[i] != c && s[i - 1] == c)
			{
				ret[j] = (char *)&s[i];
				j++;
			}
			i++;
		}
	}
	return (ret);
}

static char		**ft_getpartsend(char const *s, char c, size_t amount)
{
	size_t	i;
	size_t	j;
	char	**ret;

	ret = (char **)malloc((amount + 1) * sizeof(char *));
	if (ret)
	{
		i = 0;
		j = 0;
		while (s[i] != '\0')
		{
			if (i > 0 && s[i] == c && s[i - 1] != c)
			{
				ret[j] = (char *)&s[i];
				j++;
			}
			else if (i > 0 && s[i] != c && s[i + 1] == '\0')
			{
				ret[j] = (char *)&s[i + 1];
				j++;
			}
			i++;
		}
	}
	return (ret);
}

char			**ft_split_failed(char **arr, char **parts_start, char **parts_end, size_t amount)
{
	size_t	i;

	if (arr)
	{
		i = 0;
		while (i < amount)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
	}
	if (parts_start)
		free(parts_start);
	if (parts_end)
		free(parts_end);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	char	**parts_start;
	char	**parts_end;
	size_t	i;
	size_t	parts_amount;

	parts_amount = ft_getsepsamount(s, c);
	arr = (char **)malloc((parts_amount + 1) * sizeof(char *));
	if (arr)
	{
		parts_start = ft_getpartsstart(s, c, parts_amount);
		parts_end = ft_getpartsend(s, c, parts_amount);
		i = 0;
		if (parts_start && parts_end)
		{
			while (i < parts_amount)
			{
				arr[i] = ft_substr(s, parts_start[i] - s, parts_end[i] - parts_start[i]);
				if (!arr[i])
					return (ft_split_failed(arr, parts_start, parts_end, parts_amount));
				i++;
			}
			free(parts_start);
			free(parts_end);
		}
		else
			return (ft_split_failed(arr, parts_start, parts_end, parts_amount));
		arr[i] = 0;
	}
	return (arr);
}
