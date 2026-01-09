/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:42:33 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/09 16:09:29 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*range helpers for K-sort*/

#include "push_swap.h"

int	exists_in_range(t_node *a_stack, int low, int high)
{
	t_node	*curr;

	if (!a_stack)
		return (0);
	curr = a_stack;
	while (curr != NULL)
	{
		if (curr->ind >= low && curr->ind <= high)
			return (1);
		curr = curr->nx;
	}
	return (0);
}

/*Number of ra moves are needed to get a candidate on top*/
int	pos_first_in_range_from_top(t_node *a_stack, int low, int high)
{
	int	pos;

	if (!a_stack)
		return (-1);
	pos = 0;
	while (a_stack != NULL)
	{
		if (a_stack->ind >= low && a_stack->ind <= high)
			return (pos);
		a_stack = a_stack->nx;
		pos++;
	}
	return (-1);
}

/*Number of rra moves are needed to get a candidate on top*/
int	pos_first_in_range_from_bot(t_node *a_stack, int low, int high)
{
	int	size;
	int	pos;
	int	last_pos;

	size = stack_size(a_stack);
	pos = 0;
	last_pos = -1;
	while (a_stack != NULL)
	{
		if (a_stack->ind >= low && a_stack->ind <= high)
			last_pos = pos;
		a_stack = a_stack->nx;
		pos++;
	}
	if (last_pos == -1)
		return (-1);
	return (size - last_pos);
}
