/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstiter.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 18:37:06 by fbes          #+#    #+#                 */
/*   Updated: 2022/02/08 19:48:05 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterate over a double linked list, applying a function to every item
 * @param[in] list The list to iterate over
 * @param[in] f The function to apply to every item's contents
 */
void	ft_dlstiter(t_dlist *list, void (*f)(void *))
{
	t_ditem	*item;
	size_t	i;

	i = 0;
	item = list->first;
	while (i < list->size)
	{
		(*f)(item->content);
		item = item->next;
		i++;
	}
}
