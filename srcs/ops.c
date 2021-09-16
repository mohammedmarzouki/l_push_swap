/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:51:13 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/16 12:00:46 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

void	opsa(t_ps *ps, int prt)
{
	int	carry;

	if (prt == PRNT)
		print("sa\n");
	if (ps->la < 2)
		return ;
	carry = ps->h_a->value;
	ps->h_a->value = ps->h_a->next->value;
	ps->h_a->next->value = carry;
	carry = ps->h_a->index;
	ps->h_a->index = ps->h_a->next->index;
	ps->h_a->next->index = carry;
}

void	opsb(t_ps *ps, int prt)
{
	int	carry;

	if (prt == PRNT)
		print("sb\n");
	if (ps->lb < 2)
		return ;
	carry = ps->h_b->value;
	ps->h_b->value = ps->h_b->next->value;
	ps->h_b->next->value = carry;
	carry = ps->h_b->index;
	ps->h_b->index = ps->h_b->next->index;
	ps->h_b->next->index = carry;
}

void	oppa(t_ps *ps, int prt)
{
	t_node	*hold;

	if (prt == PRNT)
		print("pa\n");
	if (!ps->lb)
		return ;
	hold = pop(&ps->h_b);
	insert(&ps->h_a, hold);
	ps->la++;
	ps->lb--;
	if (!ps->lb)
		ps->h_b = NULL;
}

void	oppb(t_ps *ps, int prt)
{
	t_node	*hold;

	if (prt == PRNT)
		print("pb\n");
	if (!ps->la)
		return ;
	hold = pop(&ps->h_a);
	insert(&ps->h_b, hold);
	ps->lb++;
	ps->la--;
	if (!ps->la)
		ps->h_a = NULL;
}

void	oprr(t_ps *ps)
{
	print("rr\n");
	opra(ps, NPRNT);
	oprb(ps, NPRNT);
}
