/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:27:45 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/06/12 19:18:04 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

static void	my_list(t_ps *ps)
{
	int i;
	 
	i = -1;
	while (++i < ps->la)
	{
		printf("{%d}\n",ps->h_a->value);
		ps->h_a = ps->h_a->next;
	}
}

static void	init_struct(t_ps	*ps)
{
	ps->h_a = NULL;
	ps->la = 0;
	ps->lb = 0;
	ps->h_b = NULL;
}

int	main(int c, char **v)
{
	t_ps ps;
	
	(void)v;
	if (c == 1)
		ext();
	init_struct(&ps);
	fill_stack(&ps, ++v);
	my_list(&ps);
	return (0);
}
