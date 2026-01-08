/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_basic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:42:33 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/08 20:23:14 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_node *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack != NULL)
	{
		stack = stack->nx;
		i++;
	}
	return (i);
}

int	is_sorted(t_node *stack)
{
	if (!stack)
		return (1);
	while (stack != NULL && stack->nx != NULL)
	{
		if (stack->ind > stack->nx->ind)
			return (0);
		stack = stack->nx;
	}
	return (1);
}

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

/*How many ra moves are needed to get a candidate on top*/
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

/*How many rra moves are needed to get a candidate on top*/
int	pos_first_in_range_from_bot(t_node *a_stack, int low, int high)
{

}