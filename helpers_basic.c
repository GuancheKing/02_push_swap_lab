/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_basic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:42:33 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/09 12:45:10 by josjimen         ###   ########.fr       */
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
