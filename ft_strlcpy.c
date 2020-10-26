/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/15 18:46:07 by fbes          #+#    #+#                 */
/*   Updated: 2020/10/26 19:36:45 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	int				last_char_reached;
	unsigned int	i;

	if (size > 0)
	{
		last_char_reached = 0;
		i = 0;
		while (i < size - 1)
		{
			if (last_char_reached > 0 || src[i] == '\0')
			{
				last_char_reached = 1;
				dest[i] = '\0';
			}
			else
			{
				dest[i] = src[i];
			}
			i++;
		}
		dest[size - 1] = '\0';
	}
	else
		dest[0] = '\0';
	return (size);
}
