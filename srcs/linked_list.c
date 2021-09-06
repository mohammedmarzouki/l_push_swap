/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:07:15 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/06 13:55:43 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

t_node	*a_node(int	value)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (!node)
		ext();
	node->value = value;
	node->index = -1;
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

t_node	*pop(t_node **list)
{
	t_node *ret;
	
	if ((!list || !*list))
		return (NULL);
	ret = *list;
	ret->next->prev = ret->prev;
	ret->prev->next = ret->next;
	*list = ret->next;
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}

void	insert(t_node **list, t_node *node)
{

	if (!node || !list)
		return ;
	if (!(*list))
	{
		node->next = node;
		node->prev = node;
		*list = node;
		return ;
	}
	node->next = *list;
	node->prev = (*list)->prev;
	(*list)->prev = node;
	node->prev->next = node;
	*list = node;
}