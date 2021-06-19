/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:27:45 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/06/17 16:20:20 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

static void	my_list(t_ps *ps)
{
	int i;
	
	printf("\n__________________________________________________________________________\n");
	i = -1;
	while (++i < ps->la)
	{
		printf("{%d} ",ps->h_a->value);
		ps->h_a = ps->h_a->next;
	}
	printf("\n__________________________________________________________________________\n");
	i = -1;
	while (++i < ps->lb)
	{
		printf("{%d} ",ps->h_b->value);
		ps->h_b = ps->h_b->next;
	}
	printf("\n__________________________________________________________________________\n");
}

static void	init_struct(t_ps	*ps)
{
	ps->h_a = NULL;
	ps->la = 0;
	ps->lb = 0;
	ps->h_b = NULL;
}

static	void instructions(t_ps *ps)
{
	char c[2];

	c[0] = 0;
	while(c[0] != 4)
	{
		scanf("%s", c);
		if(c[0] == '0')
			opsa(ps);
		else if(c[0] == '1')		
			opsb(ps);
		else if(c[0] == '2')		
			opss(ps);
		else if(c[0] == '3')		
			oppa(ps);
		else if(c[0] == '4')		
			oppb(ps);
		else if(c[0] == '5')		
			opra(ps);
		else if(c[0] == '6')		
			oprb(ps);
		else if(c[0] == '7')		
			oprr(ps);
		else if(c[0] == '8')		
			oprra(ps);
		else if(c[0] == '9')		
			oprrb(ps);
		else if(c[0] == 'a')		
			oprrr(ps);
		my_list(ps);
	}
}

int	main(int c, char **v)
{
	t_ps ps;
	
	(void)v;
	if (c == 1)
		ext();
	init_struct(&ps);
	fill_stack(&ps, ++v);
	instructions(&ps);
	return (0);
}
