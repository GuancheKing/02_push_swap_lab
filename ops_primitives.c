/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_primitives.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:24:08 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/08 20:08:53 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_top(t_node	**stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !*stack || !(*stack)->nx)
		return ;
	first = *stack;
	second = first->nx;
	first->nx = second->nx;
	second->nx = first;
	*stack = second;
}

void	push(t_node **src, t_node **dst)
{
	t_node	*node;

	if (!src || !*src || !dst)
		return ;
	node = *src;
	*src = (*src)->nx;
	node->nx = *dst;
	*dst = node;
}

void	rotate_stack(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || !*stack || !(*stack)->nx)
		return ;
	first = *stack;
	*stack = first->nx;
	first->nx = NULL;
	last = ft_lstlast(*stack);
	last->nx = first;
}

void	r_rotate_stack(t_node **stack)
{
	t_node	*last;
	t_node	*prev;

	if (!stack || !*stack || !(*stack)->nx)
		return ;
	prev = NULL;
	last = *stack;
	while (last->nx)
	{
		prev = last;
		last = last->nx;
	}
	prev->nx = NULL;
	last->nx = *stack;
	*stack = last;
}
