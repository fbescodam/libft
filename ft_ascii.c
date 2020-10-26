/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ascii.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 20:32:48 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 20:58:52 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	char c2;

	c2 = (char)c;
	if ((c2 >= 'A' && c2 <= 'Z') || (c2 >= 'a' && c2 <= 'z'))
		return (1);
	return (0);
}

int		ft_isdigit(int c)
{
	char c2;

	c2 = (char)c;
	if (c2 >= '0' && c2 <= '9')
		return (1);
	return (0);
}

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
