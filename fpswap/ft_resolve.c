/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 19:00:23 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/25 15:41:56 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_resolve(t_node *node, int *arg)
{
	while (!ft_issort(node, 'c'))
	{
		if (node->vflag && node->cflag)
			ft_printnode(node, 'c');
		else if (node->vflag)
			ft_printnode(node, 'v');
		if (node->b && ft_issort(node, 'a') && ft_issort(node, 'b'))
			ft_pa(node);
		else
			ft_findbestvalue(node);
	}
	ft_exit(arg, node, 1);
}
