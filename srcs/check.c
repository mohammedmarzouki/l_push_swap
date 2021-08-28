/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:54:34 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/06/12 18:48:23 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

int	instack(int nb, t_ps *ps)
{
	int i;

	i = -1;
	while (++i < ps->la)
	{
		if (nb == ps->h_a->value)
			return (1);
		ps->h_a = ps->h_a->next;
	}
	return (0);
}

void	fill_stack(t_ps	*ps, char **v)
{
	int i;
	int nb;

	i = -1;
	while (v && v[++i])
	{
		nb = chk_nb(v[i]);
		if (instack(nb, ps))
			ext();
		append(&ps->h_a, a_node(nb));
		ps->la++;
	}
}

int	chk_nb(char *s)
{
	int     i;
	int    num;
	
	i = 0;
	if(s[i] == '-' && s[i + 1])
		i++;
	while(s[i])
	{
		if(!(s[i] >= '0' && s[i] <= '9'))
			ext();
		i++;
	}
	num = ft_atoi(s);
	return(num);
}

int sorted(t_ps *ps)
{
	int c;
	t_node *stck;

	if (ps->h_b)
		return (0);
	c = ps->la;
	stck = ps->h_a;
	while (--c)
	{
		if (stck->value > stck->next->value)
			return (0);
		stck = stck->next;
	}
	return (1);
}