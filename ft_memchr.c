/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:24:40 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 17:38:54 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char		c_cpy;
	const unsigned char	*s_cpy;

	c_cpy = c;
	s_cpy = s;
	while (n > 0)
	{
		if (*s_cpy == c_cpy)
			return ((void *)s_cpy);
		s_cpy++;
		n--;
	}
	return (0);
}
