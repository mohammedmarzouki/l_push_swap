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
	int a;
	int i;
	t_node *hold;
	
	a = 1;
	
	while(a)
	{
		scanf("%d", &a);
		append(&ps->h_a, a_node(a));
		ps->la++;
		hold = ps->h_a;
		i = -1;
		while (++i < ps->la)
		{
			printf("{%d}\n",hold->value);
			hold = hold->next;
		}
	} 
}

int	main(int c, char **v)
{
	t_ps ps;
	
	(void)v;
	if (c == 1)
		return (0);
	ps.h_a = NULL;
	ps.l_a = 0;
	ps.l_b = 0;
	ps.h_b = NULL;
	my_list(&ps);
	// check_dup(++v);
}
