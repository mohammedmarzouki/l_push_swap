/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:28:18 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/08 17:49:02 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

void sort_3(t_ps *ps)
{

	if (ps->h_a->index > ps->h_a->next->index && ps->h_a->index > ps->h_a->prev->index)
		opra(ps, PRNT);
	else if (ps->h_a->next->index > ps->h_a->index && ps->h_a->next->index > ps->h_a->prev->index)
		oprra(ps, PRNT);
	if (ps->h_a->index > ps->h_a->next->index)
		opsa(ps, PRNT);
}

void sort_5(t_ps *ps)
{
	if(ps->h_a->index == 0 || ps->h_a->index == 1)
		oppb(ps, PRNT);
	else if (ps->h_a->prev->index == 0 || ps->h_a->prev->index == 1)
	{		
		oprra(ps, PRNT);
		oppb(ps, PRNT);
	}
	while(ps->la > 3)
	{
		if(ps->h_a->index == 0 || ps->h_a->index == 1)
		{
			oppb(ps, PRNT);
			continue;
		}
		opra(ps, PRNT);
	}
	sort_3(ps);
	if(ps->h_b->index < ps->h_b->next->index)
		opsb(ps, PRNT);
	oppa(ps, PRNT);
	oppa(ps, PRNT);
}

void	sort_it(t_ps *ps)
{
	// arr_fx(ps);
	if (ps->la == 2)
		return (opsa(ps, PRNT));
	if (ps->la == 3)
		return (sort_3(ps));
	if (ps->la == 5)
		return (sort_5(ps));
	return(radix(ps));
}