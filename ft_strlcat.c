/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:43:06 by gde-win           #+#    #+#             */
/*   Updated: 2023/08/01 14:10:37 by gde-win          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (!dst || !src)
		return (0);
	len = ft_strlen(dst);
	if (dstsize > len)
	{
		i = len;
		j = 0;
		while (src[j] && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = 0;
		len += ft_strlen(src);
	}
	else
		len = ft_strlen(src) + dstsize;
	return (len);
}
