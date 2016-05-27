/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:08:55 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:21:50 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sa(t_node *node)
{
	int		n;
	t_lsta	*tmp;

	if (node->a && node->a->next)
	{
		tmp = node->a;
		n = tmp->na;
		tmp->na = tmp->next->na;
		tmp->next->na = n;
	}
	ft_lstadd(node, 0, 's', "sa");
}
