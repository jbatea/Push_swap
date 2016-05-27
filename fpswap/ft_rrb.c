/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 19:01:06 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:07:18 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rrb(t_node *node)
{
	int		ntmp;
	int		n;
	t_lstb	*tmp;

	tmp = node->b->prev;
	ntmp = tmp->nb;
	n = ntmp;
	while (tmp != node->b)
	{
		n = tmp->prev->nb;
		tmp->nb = n;
		tmp = tmp->prev;
	}
	tmp->nb = ntmp;
	ft_lstadd(node, 0, 's', "rrb");
}
