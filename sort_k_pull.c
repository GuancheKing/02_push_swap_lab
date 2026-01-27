/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_k_pull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:20:39 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/27 09:22:24 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	pos_of_ind(t_node *stack, int target)
{
	int		pos;
	t_node	*curr;

	pos = 0;
	curr = stack;
	while (curr)
	{
		if (curr->ind == target)
			return (pos);
		curr = curr->nx;
		pos++;
	}
	return (-1);
}

static void	rotate_b_to_pos(t_node **b, int pos, int size)
{
	int	cost_top;
	int	cost_bot;

	if (pos < 0 || size <= 1)
		return ;
	cost_bot = size - pos;
	cost_top = pos;
	if (cost_top <= cost_bot)
	{
		while (cost_top > 0)
		{
			rb(b);
			cost_top--;
		}
	}
	else
	{
		while (cost_bot > 0)
		{
			rrb(b);
			cost_bot--;
		}
	}
}

static void	fill_pull(t_node *b, t_pull *p)
{
	p->size = stack_size(b);
	p->max = find_max_ind(b);
	p->pos_max = pos_of_ind(b, p->max);
	p->pos_prev = pos_of_ind(b, p->max - 1);
	p->cost_max = p->pos_max;
	if (p->size - p->pos_max < p->cost_max)
		p->cost_max = p->size - p->pos_max;
	p->cost_prev = p->cost_max + 1;
	if (p->pos_prev != -1)
	{
		p->cost_prev = p->pos_prev;
		if (p->size - p->pos_prev < p->cost_prev)
			p->cost_prev = p->size - p->pos_prev;
	}
}

static void	pull_step(t_node **a, t_node **b, int *pending_swap)
{
	t_pull	p;

	fill_pull(*b, &p);
	if (p.pos_prev != -1 && p.cost_prev < p.cost_max)
	{
		rotate_b_to_pos(b, p.pos_prev, p.size);
		pa(a, b);
		*pending_swap = 1;
	}
	else
	{
		rotate_b_to_pos(b, p.pos_max, p.size);
		pa(a, b);
		if (*pending_swap && *a && (*a)->nx)
		{
			sa(a);
			*pending_swap = 0;
		}
	}
}

void	k_pull_back(t_node **a, t_node **b)
{
	int	pending_swap;

	pending_swap = 0;
	while (*b != NULL)
		pull_step(a, b, &pending_swap);
}
