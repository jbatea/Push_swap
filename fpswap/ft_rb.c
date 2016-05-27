/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 19:00:08 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:29:33 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rb(t_node *node)
{
	t_lstb	*tmp;
	int		n;
	int		ntmp;

	tmp = node->b->next;
	ntmp = tmp->nb;
	n = ntmp;
	while (tmp != node->b)
	{
		n = tmp->next->nb;
		tmp->nb = n;
		tmp = tmp->next;
	}
	tmp->nb = ntmp;
	ft_lstadd(node, 0, 's', "rb");
}
