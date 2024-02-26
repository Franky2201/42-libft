/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <gde-win@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:14:28 by gde-win           #+#    #+#             */
/*   Updated: 2024/02/26 15:40:09 by gde-win          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*first;

	if (lst)
	{
		if (*lst && new)
		{
			first = ft_lstfirst(*lst);
			(*new).next = first;
			first->previous = new;
		}
		else
			*lst = new;
	}
}
