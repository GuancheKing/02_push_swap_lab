/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:29:06 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/23 15:15:45 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	pos_of_ind_from_top(t_node *a, int target)
{
	int		pos;
	t_node	*curr;

	pos = 0;
	curr = a;
	while (curr != NULL)
	{
		if (curr->ind == target)
			return (pos);
		curr = curr->nx;
		pos++;
	}
	return (-1);
}

static void	bring_target_to_top(t_node **a, int target)
{
	int	size;
	int	pos;

	size = stack_size(*a);
	pos = pos_of_ind_from_top(*a, target);
	if (pos < 0)
		return ;
	if (pos <= size / 2)
	{
		while (pos > 0)
		{
			ra(a);
			pos--;
		}
	}
	else
	{
		pos = size - pos;
		while (pos > 0)
		{
			rra(a);
			pos--;
		}
	}
}

void	sort_small_5(t_node **a, t_node **b)
{
	int		size;
	int		to_push;
	int		target;

	size = stack_size(*a);
	to_push = size - 3;
	target = 0;
	while (to_push > 0)
	{
		bring_target_to_top(a, target);
		pb(a, b);
		target++;
		to_push--;
	}
	sort_small_3(a);
	if (size == 5 && *b && (*b)->nx && (*b)->ind > (*b)->nx->ind)
		sb(b);
	while (*b)
		pa(a, b);
}
