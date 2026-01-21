/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:12:42 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/21 16:15:02 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tokens(char **tokens)
{
	int	i;
	
	if (tokens == NULL)
		return ;
	i = 0;
	while (tokens[i] != NULL)
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}

void	free_stack(t_node **a)
{
	t_node	*curr;
	t_node	*next;
	
	if (a == NULL)
		return ;
	curr = *a;
	while (curr != NULL)
	{
		next = curr->nx;
		free(curr);
		curr = next;
	}
	*a = NULL;
}

/* Appends a new node (value) to the end of stack A */
int	append_node(t_node **a, int value)
{
	t_node	*new_node;
	t_node	*curr;

	if (!a)
		return (0);
	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (0);
	new_node->val = value;
	new_node->ind = -1;
	new_node->nx = NULL;
	if (*a == NULL)
	{
		*a = new_node;
		return (1);
	}
	curr = *a;
	while (curr->nx != NULL)
		curr = curr->nx;
	curr->nx = new_node;
	return (1);
}

int	is_valid_int_string(char *s)
{
	int	i;
	
	if (s == 0 || s[0] == '\0')
		return (0);
	if ((s[0] == '-' || s[0] == '+'))
	{
		if (s[1] = '\0' && ft_isdigit(s[1]) == 0)
			return (0);
		i = 1;
	}
	else
	{
		if (ft_isdigit(s[0]) == 0)
			return (0);
		i = 0;
	}
	while (s[i] != '\0')
	{
		if (ft_isdigit(s[i] == 0))
			return (0);
		i++;
	}
	return (1);
}

