/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <gde-win@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:49:24 by gde-win           #+#    #+#             */
/*   Updated: 2023/08/01 11:29:43 by gde-win          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd < 0)
		return ;
	if (n <= -10 || n >= 10)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	n %= 10;
	n *= (n >= 0) - (n < 0);
	c = n + '0';
	write (fd, &c, 1);
}
