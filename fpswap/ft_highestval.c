/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highestval.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:52:49 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/25 15:41:43 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_highestvala(t_node *node)
{
	int	na;

	if (node->a && node->a->next)
	{
		na = node->a->na;
		if (na > node->a->next->na && na > node->a->prev->na)
			return (3);
		if (na > node->a->next->na)
			return (1);
		if (na > node->a->prev->na)
			return (5);
	}
	return (0);
}

int		ft_highestvalb(t_node *node)
{
	int	nb;

	if (node->b && node->b->next)
	{
		nb = node->b->nb;
		if (nb < node->b->next->nb && nb < node->b->prev->nb)
			return (4);
		if (nb < node->b->next->nb)
			return (2);
		if (nb < node->b->prev->nb)
			return (6);
	}
	return (0);
}

int		ft_highestval(t_node *node, char c)
{
	if (c == 'a')
		return (ft_highestvala(node));
	if (c == 'b')
		return (ft_highestvalb(node));
	return (0);
}
