/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:17:56 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/21 22:59:56 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_node *a)
{
	t_node	*curr;
	t_node	*cmp;
	int		rank;

	curr = a;
	while (curr != NULL)
	{
		rank = 0;
		cmp = a;
		while (cmp != NULL)
		{
			if (cmp->val < curr->val)
				rank++;
			cmp = cmp->nx;
		}
		curr->ind = rank;
		curr = curr->nx;
	}		
}
