/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:02:29 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/09 12:48:30 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <limits.h> // INT_MIN & INT_MAX

//int	push_swap

/* ===== Structure ===== */
typedef struct s_node
{
	int				val;
	int				ind;
	struct s_node	*nx;	
}					t_node;

/* ===== Primitives Ops ======*/
void	swap_top(t_node **stack);
void	push(t_node **src, t_node **dst);
void	rotate_stack(t_node **stack);
void	r_rotate_stack(t_node **stack);

/* ===== Helpers ===== */
t_node	*ft_lstlast(t_node *lst);
int		stack_size(t_node *stack);
int		is_sorted(t_node *stack);
int		exists_in_range(t_node *a_stack, int low, int high);
int		pos_first_in_range_from_top(t_node *a_stack, int low, int high);
int		pos_first_in_range_from_bot(t_node *a_stack, int low, int high);

#endif