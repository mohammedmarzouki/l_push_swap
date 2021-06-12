/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:07:15 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/06/12 19:11:57 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

t_node	*a_node(int	value)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (!node)
		ext("allocation failed");
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	append(t_node **list, t_node *node)
{
	t_node *head;

	if (!node || !list)
		return ;
	if (!(*list))
	{
		node->next = node;
		node->prev = node;
		*list = node;
		return ;
	}
	head = *list;
	node->next = head;
	node->prev = head->prev;
	head->prev->next = node;
	head->prev = node;
}
