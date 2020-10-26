/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 14:36:46 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 19:44:39 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (dest[i] && i < size)
		i++;
	dest_len = i;
	while (src[i - dest_len] && i + 1 < size)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	if (dest_len < size)
		dest[i] = '\0';
	return (dest_len + src_len);
}
