/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:48:26 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/06 17:57:42 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

void	opss(t_ps *ps)
{
	print("ss\n");
	opsa(ps, NPRNT);
	opsb(ps, NPRNT);
}

void	opra(t_ps *ps, int prt)
{
	if (prt == PRNT)
		print("ra\n");
	if(!ps->la)
		return ;
	ps->h_a = ps->h_a->next;
}

void	oprra(t_ps *ps, int prt)
{
	if (prt == PRNT)
		print("rra\n");
	if(!ps->la)
		return ;
	ps->h_a = ps->h_a->prev;
}

void	oprb(t_ps *ps, int prt)
{
	if (prt == PRNT)
		print("rb\n");
	if(!ps->lb)
		return ;
	ps->h_b = ps->h_b->next;
}

void	oprrb(t_ps *ps, int prt)
{
	if (prt == PRNT)
		print("rrb\n");
	if(!ps->lb)
		return ;
	ps->h_b = ps->h_b->prev;
}
