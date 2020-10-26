/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 19:07:21 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 19:17:23 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const char	*s1_cpy;
	const char	*s2_cpy;

	s1_cpy = s1;
	s2_cpy = s2;
	while (n > 0)
	{
		if (*s1_cpy != *s2_cpy)
			return (*s1_cpy - *s2_cpy);
		s1_cpy++;
		s2_cpy++;
		n--;
	}
	return (0);
}
