/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_k.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 21:21:10 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/23 14:43:40 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	choose_k(int n)
{
	int	k;

	k = square_root(n) * 7 / 5;
	return (k);
}

/* Sorts stacks using chunk push to B and max pull back to A */
void	sort_k(t_node **a, t_node **b)
{
	int	n;
	int	k;

	n = stack_size(*a);
	k = choose_k(n);
	k_push_chunks(a, b, n, k);
	k_pull_back(a, b);
}
