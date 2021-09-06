/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:28:18 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/06 12:37:07 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

void sort_3(t_ps *ps)
{
	if (ps->h_a > ps->h_a->next && ps->h_a > ps->h_a->prev)
		opra(ps, PRNT);
	else if (ps->h_a->next > ps->h_a && ps->h_a->next > ps->h_a->prev)
		oprra(ps, PRNT);
	if (ps->h_a > ps->h_a->next)
		opsa(ps, PRNT);
}

void sort_5(t_ps *ps)
{
	if (ps->h_a > ps->h_a->next && ps->h_a > ps->h_a->prev)
		opra(ps, PRNT);
	else if (ps->h_a->next > ps->h_a && ps->h_a->next > ps->h_a->prev)
		oprra(ps, PRNT);
	if (ps->h_a > ps->h_a->next)
		opsa(ps, PRNT);
}

void	sort_it(t_ps *ps)
{
	// arr_fx(ps);
	if (ps->la == 2);
		return (opsa(ps, PRNT));
	if (ps->la == 3)
		return (sort_3(ps));
		// small_sort();
}