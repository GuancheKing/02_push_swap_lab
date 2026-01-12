/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_k.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 21:21:10 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/12 10:00:26 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_k(t_node **a, t_node **b)
{
	int	n;
	int	k;
	
	n = stack_size(*a);
	k = choose_k(n);
	
}

int	choose_k(int n)
{
	int	k;

	k = 0;
	if (n <= 100)
		k = 20;
	k = 45;
	return (k);
}

void k_push_chunks(t_node **a, t_node **b, int n, int k)
{
	int low;
	int high;
	int mid;
	int first_top;
	int first_bot;

	low = 0;
	high = k -1;
	mid = low + (high - low) / 2;
	while (a != NULL)
	{
		if (exists_in_range(*a, low, high) != -1)
		{
			first_top = pos_first_in_range_from_top(*a, low, high);
			first_bot = pos_first_in_range_from_bot(*a, low, high);
		}
	}
}
