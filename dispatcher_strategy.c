/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher_strategy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:28:03 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/27 10:40:44 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dispatcher_strategy(t_node **a, t_node **b)
{
	int	n;

	n = stack_size(*a);
	if (n <= 1)
		return ;
	if (is_sorted(*a))
		return ;
	if (n == 2)
	{
		if ((*a)->ind > (*a)->nx->ind)
			sa(a);
		return ;
	}
	else if (n == 3)
		sort_small_3(a);
	else if (n <= 5)
		sort_small_5(a, b);
	else
		sort_k(a, b);
}
