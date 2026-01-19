/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_k_pull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:20:39 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/19 11:48:39 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_b_to_max(t_node **b, int pos, int size)
{
	int	cost_top;
	int	cost_bot;
	
	cost_bot = size - pos;
	cost_top = pos;
	if (pos <= size / 2)
	{
		while (cost_top > 0)
		{
			rb(b);
			cost_top--;
		}
	}
	else
		while (cost_bot > 0)
		{
			rrb(b);
			cost_bot--;
		}
}

void	k_pull_back(t_node **a, t_node **b)
{
	int	max;
	int	pos;
	int	size;
	
	while (*b != NULL)
	{
		max = find_max_ind(*b);
		pos = pos_of_max_ind(*b, max);
		size = stack_size(*b);
		rotate_b_to_max(b, pos, size);
		pa(a, b);
	}
}
