/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:24:54 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/23 15:13:53 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (!parse_args(argc, argv, &a))
		return (1);
	index_stack(a);
	dispatcher_strategy(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
