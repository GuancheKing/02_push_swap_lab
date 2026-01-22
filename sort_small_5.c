/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:29:06 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/22 19:01:01 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	pos_of_ind_from_top(t_node *a, int target)
{
	int 	pos;
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

void	sort_small_5(t_node **a, t_node **b)
{
	int		size;
	int		to_push;

	size = stack_size(*a);
	to_push = size - 3;
	while (to_push > 0)
	{
		
	}
	
}
