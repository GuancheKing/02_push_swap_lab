/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:02:29 by josjimen          #+#    #+#             */
/*   Updated: 2025/12/12 17:42:06 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write

//int	push_swap

/* ===== Structure ===== */
typedef	struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;	
}					t_node;

/* ===== Primitives Ops ======*/
void	swap_top(t_node **stack);
void	push(t_node **src, t_node **dst);
void	rotate_stack(t_node **stack);

/* ===== Helpers ===== */
t_node	*ft_lstlast(t_node	*lst);

#endif