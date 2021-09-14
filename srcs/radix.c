/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:42:03 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/08 18:50:03 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

void	radix(t_ps *ps)
{
	int	i;
	int	j;
	int	hold;
	int lenght;

	i = -1;
	while (!sorted(ps))
	{
		i++;
		lenght = ps->la;
		j = -1;
		while (++j < lenght)
		{
			hold = ps->h_a->index;
			if (((hold >> i) & 1))
				opra(ps, PRNT);
			else
				oppb(ps, PRNT);
		}
		while (ps->lb)
			oppa(ps, PRNT);
	}
}