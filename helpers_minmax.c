/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_minmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:07:43 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/10 14:04:05 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Finds and returns the highest index in the given stack */
int	find_max_ind(t_node *b_stack)
{
	int		max;
	t_node	*curr;

	if (!b_stack)
		return (-1);
	max = b_stack->ind;
	curr = b_stack->nx;
	while (curr != NULL)
	{
		if (curr->ind > max)
			max = curr->ind;
		curr = curr->nx;
	}
	return (max);
}

/* Returns position of the maximum index from the top of the stack */
int	pos_of_max_ind(t_node *b_stack, int max)
{
	int	pos;

	if (!b_stack)
		return (-1);
	pos = 0;
	while (b_stack != NULL)
	{
		if (b_stack->ind == max)
			return (pos);
		b_stack = b_stack->nx;
		pos++;
	}
	return (-1);
}
