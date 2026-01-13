/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:33:48 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/13 17:49:15 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	if (!a || !*a || !(*a)->nx)
		return;
	swap_top(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	if (!b || !*b || !(*b)->nx)
		return;
	swap_top(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	int	flag;
	
	flag = 0;
	if (a && *a && (*a)->nx)
	{
		swap_top(a);
		flag = 1;
	}
	if (b && *b && (*b)->nx)
	{
		swap_top(b);
		flag = 1;
	}
	if (flag == 1)
		write(1, "ss\n", 3);
}
