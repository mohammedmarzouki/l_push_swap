/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:27:35 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/06/17 15:54:36 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_SWAP_H
# define P_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct	s_node
{
	int				value;
	struct	s_node *next;
	struct	s_node *prev;
}	t_node;

typedef struct s_ps
{
	t_node	*h_a;
	int		la;
	int		lb;
	t_node	*h_b;
}	t_ps;

/* ops */
void    opsa(t_ps *ps);
void    opsb(t_ps *ps);
void    opss(t_ps *ps);
void	oppa(t_ps *ps);
void	oppb(t_ps *ps);
void	opra(t_ps *ps);
void	oprb(t_ps *ps);
void	oprr(t_ps *ps);
void	oprra(t_ps *ps);
void	oprrb(t_ps *ps);
void	oprrr(t_ps *ps);

/* linked list */
t_node	*a_node(int	value);
void	append(t_node **list, t_node *node);
t_node	*pop(t_node **list);
void	insert(t_node **list, t_node *node);

/* tools */ 
void	ext();
int		chk_nb(char *s);
int		ft_atoi(const char *str);
void	fill_stack(t_ps	*ps, char **v);
int		instack(int nb, t_ps *ps);

/* string manipulators */
int		len(char *s);
void	print(char *s);
int		same(char *s1, char *s2);

#endif
