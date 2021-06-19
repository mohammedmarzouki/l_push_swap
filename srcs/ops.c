/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:51:13 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/06/17 15:55:50 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

void	opsa(t_ps *ps)
{
	int carry;
	
	if(ps->la < 2)
		return ;
	carry = ps->h_a->value;
	ps->h_a->value = ps->h_a->next->value;
	ps->h_a->next->value = carry;
}

void	opsb(t_ps *ps)
{
	int carry;
	
	if (ps->lb < 2)
		return ;
	carry = ps->h_b->value;
	ps->h_b->value = ps->h_b->next->value;
	ps->h_b->next->value = carry;
}

void	oppa(t_ps *ps)
{
	t_node *hold;

	if (!ps->lb)
		return ;
	hold = pop(&ps->h_b);
	insert(&ps->h_a, hold);
	ps->la++;
	ps->lb--;
}

void	oppb(t_ps *ps)
{
	t_node *hold;

	if (!ps->la)
		return ;
	hold = pop(&ps->h_a);
	insert(&ps->h_b, hold);
	ps->lb++;
	ps->la--;
}

void	oprr(t_ps *ps)
{
	opra(ps);
	oprb(ps);
}
