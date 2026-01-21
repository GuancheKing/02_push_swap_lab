/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:22:20 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/21 18:50:18 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	process_token(char *token, t_node **a)
{
	long	value;
	if (token == NULL)
		return (0);
	if (is_valid_int_string(token) == 0)
		return (0);
	value = ft_atol(token);
	if (value < INT_MIN || value > INT_MAX)
		return (0);
	if (is_duplicate(*a, (int)value) == 1)
		return (0);
	if (append_node(a, (int)value) == 0)
		return (0);
	return (1);
}

int	process_arg_string(char *s, t_node **a)
{
	char **tokens;
	int 	i;

	tokens = ft_split(s, ' ');
	if (tokens == NULL)
		return (0);
	if (tokens[0] == NULL)
	{
		free_tokens(tokens);
		return (0);
	}
	i = 0;
	while (tokens[i] != NULL)
	{
		if (process_token(tokens[i], a) == 0)
		{
			free_tokens(tokens);
			return (0);
		}
		i++;
	}
	free_tokens(tokens);
	return (1);
}

int	parse_args(int argc, char **argv, t_node **a)
{
	if (argc == 1)
		return (1);
	
}

