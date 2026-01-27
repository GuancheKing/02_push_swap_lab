/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:21:07 by josjimen          #+#    #+#             */
/*   Updated: 2026/01/27 10:21:59 by josjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <limits.h>

int	fits_in_int(const char *s)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	if (!s[i])
		return (0);
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i++] == '-')
			sign = -1;
	}
	if (s[i] < '0' || s[i] > '9')
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign == 1 && res > (INT_MAX - (s[i] - '0')) / 10)
			return (0);
		if (sign == -1 && res > (-(long)INT_MIN - (s[i] - '0')) / 10)
			return (0);
		res = res * 10 + (s[i++] - '0');
	}
	return (s[i] == '\0');
}
