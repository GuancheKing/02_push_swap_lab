/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:29:10 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/23 15:15:23 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_3(t_node **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->ind;
	second = ((*a)->nx)->ind;
	third = ((*a)->nx->nx)->ind;
	if (first > second && first > third)
		ra(a);
	else if (second > first && second > third)
		rra(a);
	first = (*a)->ind;
	second = ((*a)->nx)->ind;
	if (first > second)
		sa(a);
}
