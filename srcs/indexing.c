/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:02:23 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/06 17:55:27 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

static void bubble_sort(t_node **tab, int lenth)
{
	t_node	*hold;
	int		i;
	int		j;

	i = -1;
	while(++i < lenth - 1)
	{
		j = i; 
		while(++j < lenth)
		{
			if(tab[i]->value > tab[j]->value)
			{
				hold = tab[i];
				tab[i] = tab[j];
				tab[j] = hold;
			}
		}
	}
}

void	index_it(t_ps *ps)
{
	t_node	**tab;
	t_node	*hold;
	int		count;

	count = ps->la;
	hold = ps->h_a;
	tab = malloc(sizeof(t_node *) * ps->la);
	while (count--)
	{
		tab[count] = hold;
		hold = hold->next;
	}
	bubble_sort(tab, ps->la);
	while(++count < ps->la)
		tab[count]->index = count;
	free(tab);
}