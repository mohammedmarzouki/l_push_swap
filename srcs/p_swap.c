/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:27:45 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/14 13:05:39 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

static void	init_struct(t_ps	*ps)
{
	ps->h_a = NULL;
	ps->la = 0;
	ps->lb = 0;
	ps->h_b = NULL;
}

int free_all(t_ps *ps)
{
	int	i;
	t_node *nxt;

	i = -1;
	while(++i < ps->la)
	{
		nxt = ps->h_a->next;
		free(ps->h_a);
		ps->h_a = nxt;
	}
	return (1);
}

int	main(int c, char **v)
{
	t_ps ps;
	
	if (c == 1)
		ext();
	init_struct(&ps);
	fill_stack(&ps, ++v);
	if (sorted(&ps) && free_all(&ps))
		return (0);
	index_it(&ps);
	sort_it(&ps);
	free_all(&ps);
	system("leaks push_swap");
	return (0);
}
