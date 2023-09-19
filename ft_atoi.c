/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:28:05 by gde-win           #+#    #+#             */
/*   Updated: 2023/08/01 10:54:30 by gde-win          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	sum;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	sum = 0;
	while (ft_isdigit(str[i]))
	{
		sum = sum * 10 + (str[i++] - '0');
		if (sum < 0)
		{
			if (sign < 0)
				return ((int)LONG_MIN);
			return ((int)LONG_MAX);
		}
	}
	sum *= sign;
	return ((int)sum);
}
