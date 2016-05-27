/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findbestvalue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:52:04 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/25 15:37:57 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_applyvalue(t_node *node, int i)
{
	if (i == 1)
		ft_sa(node);
	if (i == 2)
		ft_sb(node);
	if (i == 3)
		ft_ra(node);
	if (i == 4)
		ft_rb(node);
	if (i == 5)
		ft_rra(node);
	if (i == 6)
		ft_rrb(node);
}

void	ft_findbestvalue(t_node *node)
{
	int	i;

	i = 0;
	if (i == 0 && !ft_issort(node, 'a'))
		i = ft_highestval(node, 'a');
	if (i == 0 && !ft_issort(node, 'b'))
		i = ft_highestval(node, 'b');
	if (i == 0 && node->a && !ft_issort(node, 'a'))
		ft_pb(node);
	else if (i == 0)
		ft_pa(node);
	ft_applyvalue(node, i);
}
