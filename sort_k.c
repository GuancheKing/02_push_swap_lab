/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_k.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 21:21:10 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/19 12:57:58 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	choose_k(int n)
{
	int	k;

	k = 0;
	if (n <= 100)
		k = 20;
	else
		k = 45;
	return (k);
}

void	sort_k(t_node **a, t_node **b)
{
	int	n;
	int	k;

	n = stack_size(*a);
	k = choose_k(n);
	k_push_chunks(a, b, n, k);
	k_pull_back(a, b);
}
