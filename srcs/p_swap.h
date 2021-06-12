/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:27:35 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/06/12 19:17:57 by mmarzouk         ###   ########.fr       */
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


/* linked list */
t_node	*a_node(int	value);
void	append(t_node **list, t_node *node);

/* tools */ 
void	ext(char *s);

/* string manipulators */
int		len(char *s);
void	print(char *s);
int		same(char *s1, char *s2);

#endif
