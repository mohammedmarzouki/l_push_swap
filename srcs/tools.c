/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:58:23 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/09/08 18:50:45 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_swap.h"

void	ext()
{
	print("Error\n");
	exit(1);
}

int	ft_atoi(const char *str)
{
	int		signe;
	long	resultat;

	resultat = 0;
	signe = 1;
	if (*str == '-' && ++str)
		signe = -1;
	while (*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + *str - '0';
		if ((resultat * signe) > 2147483647 || (resultat * signe) < -2147483648)
			ext();
		str++;
	}
	return ((int)(resultat * signe));
}

void	oprrr(t_ps *ps)
{
	print("rrr\n");
	oprra(ps, NPRNT);
	oprrb(ps, NPRNT);
}
