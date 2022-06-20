/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstclear.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: fbes <fbes@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 18:12:34 by fbes          #+#    #+#                 */
/*   Updated: 2022/02/09 17:12:48 by fbes          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Clear a double linked list and free the entirity of its existence
 * @param[in] list The list to free
 * @param[in] del A function to use to free the contents of the list items
 */
void	ft_dlstclear(t_dlist *list, void (*del)(void *))
{
	t_ditem		*item;
	t_ditem		*next_item;
	size_t		i;

	if (list)
	{
		i = 0;
		item = list->first;
		while (i < list->size)
		{
			next_item = item->next;
			ft_dlstdelone(item, del);
			item = next_item;
			i++;
		}
		free(list);
	}
}
