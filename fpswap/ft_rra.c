/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 15:05:09 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:05:28 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rra(t_node *node)
{
	int		ntmp;
	int		n;
	t_lsta	*tmp;

	tmp = node->a->prev;
	ntmp = tmp->na;
	n = ntmp;
	while (tmp != node->a)
	{
		n = tmp->prev->na;
		tmp->na = n;
		tmp = tmp->prev;
	}
	tmp->na = ntmp;
	ft_lstadd(node, 0, 's', "rra");
}
