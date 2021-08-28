/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:33:00 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/08/17 13:12:11 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

void    arr_fx(t_ps *ps)
{
	ps->op[SA] = opsa;
	ps->op[SB] = opsb;
	ps->op[SS] = opss;
	ps->op[RA] = opra;
	ps->op[RB] = oprb;
	ps->op[RR] = oprr;
	ps->op[RRA] = oprra;
	ps->op[RRB] = oprrb;
	ps->op[RRR] = oprrr;
	ps->op[PA] = oppa;
	ps->op[PB] = oppb;
}