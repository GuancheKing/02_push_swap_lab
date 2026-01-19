/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_k_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:56:25 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/19 11:49:19 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_to_candidate(t_node **a, int cost_top, int cost_bot)
{
	if (cost_top <= cost_bot)
	{
		while (cost_top > 0)
		{
			ra(a);
			cost_top--;
		}
	}
	else
	{
		while (cost_bot > 0)
		{
			rra(a);
			cost_bot--;
		}
	}
}

static void	push_and_place_b(t_node **a, t_node **b, int mid)
{
	pb(a, b);
	if ((*b)->ind > mid)
		rb(b);
}

static void	init_range_vars(t_range *range, int k, int n)
{
	range->low = 0;
	range->high = k -1;
	if (range->high > n - 1)
		range->high = n - 1;
	range->mid = range->low + (range->high - range->low) / 2;
}

void	k_push_chunks(t_node **a, t_node **b, int n, int k)
{
	t_range	range;
	int		cost_top;
	int		cost_bot;

	init_range_vars(&range, k, n);
	while (*a != NULL)
	{
		if (exists_in_range(*a, range.low, range.high) == 1)
		{
			cost_top = pos_first_in_range_from_top(*a, range.low, range.high);
			cost_bot = pos_first_in_range_from_bot(*a, range.low, range.high);
			rotate_to_candidate(a, cost_top, cost_bot);
			push_and_place_b(a, b, range.mid);
		}
		else
		{
			range.low += k;
			range.high += k;
			if (range.high > n - 1)
				range.high = n - 1;
			range.mid = range.low + (range.high - range.low) / 2;
		}
	}
}
