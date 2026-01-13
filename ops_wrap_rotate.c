/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_wrap_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:18 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/13 23:38:19 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
{
	if (!a || !*a || !(*a)->nx)
		return ;
	rotate_stack(a);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	if (!b || !*b || !(*b)->nx)
		return ;
	rotate_stack(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	int	flag;

	flag = 0;
	if (a && *a && (*a)->nx)
	{
		rotate_stack(a);
		flag = 1;
	}
	if (b && *b && (*b)->nx)
	{
		rotate_stack(b);
		flag = 1;
	}
	if (flag == 1)
		write(1, "rr\n", 3);
}
