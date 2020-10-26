/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:31:33 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 17:34:47 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	char		*dest_cpy;
	const char	*src_cpy;

	dest_cpy = dest;
	src_cpy = src;
	while (n > 0)
	{
		*dest_cpy = *src_cpy;
		dest_cpy++;
		if (*src_cpy == (char)c)
			return ((void *)dest_cpy);
		src_cpy++;
		n--;
	}
	return (0);
}
