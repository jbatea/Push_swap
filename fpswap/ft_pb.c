/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:58:48 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/02 15:19:24 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_pb(t_node *node)
{
	int		n;
	t_lsta	*tmp;

	if (node && node->a)
	{
		tmp = node->a;
		n = tmp->na;
		ft_lstadd_top(node, n, 'b');
		ft_lstdelone(node, 'a');
	}
	ft_lstadd(node, 0, 's', "pb");
}
