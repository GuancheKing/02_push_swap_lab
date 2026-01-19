/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:02:29 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/19 14:46:30 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> 
# include <limits.h>
# include <stdlib.h>

//int	push_swap

/* ===== Structure ===== */
typedef struct s_node
{
	int				val;
	int				ind;
	struct s_node	*nx;	
}					t_node;

typedef struct s_range
{
	int	low;
	int	high;
	int	mid;
}					t_range;

/* ===== Primitives Ops ======*/
void	swap_top(t_node **stack);
void	push(t_node **src, t_node **dst);
void	rotate_stack(t_node **stack);
void	r_rotate_stack(t_node **stack);

/*===== Wrapper Ops =====*/
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

/* ===== Sorting Helpers ===== */
void	k_push_chunks(t_node **a, t_node **b, int n, int k);
void	k_pull_back(t_node **a, t_node **b);
void	sort_k(t_node **a, t_node **b);

/* ===== Helpers ===== */
t_node	*ft_lstlast(t_node *lst);
int		stack_size(t_node *stack);
int		is_sorted(t_node *stack);
int		exists_in_range(t_node *a_stack, int low, int high);
int		pos_first_in_range_from_top(t_node *a_stack, int low, int high);
int		pos_first_in_range_from_bot(t_node *a_stack, int low, int high);
int		find_max_ind(t_node *b_stack);
int		pos_of_max_ind(t_node *b_stack, int max);
char	**ft_split(const char *s, char c);

#endif