/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:58:36 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:04:50 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_pa(t_node *node)
{
	int		n;
	t_lstb	*tmp;

	if (node && node->b)
	{
		tmp = node->b;
		n = tmp->nb;
		ft_lstadd_top(node, n, 'a');
		ft_lstdelone(node, 'b');
	}
	ft_lstadd(node, 0, 's', "pa");
}
