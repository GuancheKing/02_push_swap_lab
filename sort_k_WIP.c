/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_k_WIP.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 21:21:10 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/14 17:56:47 by josjimen         ###   ########.fr       */
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
	else
		k = 45;
	return (k);
}
