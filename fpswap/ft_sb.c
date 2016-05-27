/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 19:01:51 by jbateau           #+#    #+#             */
/*   Updated: 2016/04/28 19:09:23 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sb(t_node *node)
{
	int		n;
	t_lstb	*tmp;

	if (node->b && node->b->next)
	{
		tmp = node->b;
		n = tmp->nb;
		tmp->nb = tmp->next->nb;
		tmp->next->nb = n;
	}
	ft_lstadd(node, 0, 's', "sb");
}
