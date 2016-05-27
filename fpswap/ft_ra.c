/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 15:26:26 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:26:48 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_ra(t_node *node)
{
	t_lsta	*tmp;
	int		n;
	int		ntmp;

	tmp = node->a->next;
	ntmp = tmp->na;
	n = ntmp;
	while (tmp != node->a)
	{
		n = tmp->next->na;
		tmp->na = n;
		tmp = tmp->next;
	}
	tmp->na = ntmp;
	ft_lstadd(node, 0, 's', "ra");
}
