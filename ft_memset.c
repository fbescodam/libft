/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:29:31 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 16:23:13 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	char	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = c;
		copy++;
		n--;
	}
	return (s);
}
