/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:02:31 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/23 17:19:57 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;
	size_t	start_i;

	start_i = (size_t)start;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start_i >= s_len)
	{
		subs = malloc(1);
		if (subs == NULL)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (len > s_len - start_i)
		len = s_len - start_i;
	subs = malloc ((len + 1) * sizeof(char));
	if (subs == NULL)
		return (NULL);
	ft_memcpy(subs, s + start_i, len);
	subs[len] = '\0';
	return (subs);
}
