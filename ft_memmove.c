/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:14:02 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 17:22:24 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			temp[n];
	const char		*src_cpy;
	char			*dest_cpy;

	src_cpy = src;
	dest_cpy = dest;
	i = 0;
	while (i < n)
	{
		temp[i] = src_cpy[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_cpy[i] = temp[i];
		i++;
	}
	return (dest);
}
