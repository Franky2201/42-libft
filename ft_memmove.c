/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:50:42 by gde-win           #+#    #+#             */
/*   Updated: 2023/08/01 11:23:37 by gde-win          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;

	if ((!dst && !src) || len < 0)
		return (NULL);
	p1 = (char *)src;
	p2 = (char *)dst;
	if (p1 > p2)
		while (len--)
			*p2++ = *p1++;
	else
		while (len--)
			p2[len] = p1[len];
	return (dst);
}
