/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:38:46 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/19 14:36:38 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	word_count(const char *s, char c)
{
	size_t	words;
	size_t	i;

	if (c == 0)
	{
		if (s[0] != '\0')
			return (1);
		else
			return (0);
	}
	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static size_t	skip_seps(const char *s, size_t i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static void	free_split(char **array, size_t k)
{
	size_t	j;

	j = 0;
	while (array && j < k)
	{
		free(array[j]);
		j++;
	}
	free(array);
}

static int	fill_array(char **array, const char *s, char c, size_t words)
{
	size_t	i;
	size_t	k;
	size_t	len;

	i = 0;
	k = -1;
	while (++k < words)
	{
		i = skip_seps(s, i, c);
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		array[k] = ft_substr(s, i, len);
		if (array[k] == NULL)
		{
			free_split(array, k);
			return (0);
		}
		i = i + len;
	}
	array[k] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**array;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	array = malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	if (!fill_array(array, s, c, words))
		return (NULL);
	return (array);
}
