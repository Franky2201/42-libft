/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <gde-win@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:49:24 by gde-win           #+#    #+#             */
/*   Updated: 2023/08/10 18:00:58 by gde-win          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, ssize_t *len)
{
	char	c;

	if (n <= -10 || n >= 10)
		ft_putnbr(n / 10, len);
	else if (n < 0)
	{
		write(1, "-", 1);
		(*len)++;
		n *= -1;
	}
	n %= 10;
	n *= (n >= 0) - (n < 0);
	c = n + '0';
	write (1, &c, 1);
	(*len)++;
}