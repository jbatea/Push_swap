/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:53:07 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:06:54 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_issorta(t_node *node)
{
	t_lsta	*tmp;

	if (node && node->a)
	{
		tmp = node->a->next;
		if (node->a->na > tmp->na)
			return (0);
		while (tmp != node->a->prev)
		{
			if (tmp->na > tmp->next->na)
				return (0);
			tmp = tmp->next;
		}
	}
	return (1);
}

int			ft_issortb(t_node *node)
{
	t_lstb	*tmp;

	if (node && node->b)
	{
		tmp = node->b->next;
		if (node->b->nb < tmp->nb)
			return (0);
		while (tmp != node->b->prev)
		{
			if (tmp->nb < tmp->next->nb)
				return (0);
			tmp = tmp->next;
		}
	}
	return (1);
}

int			ft_issort(t_node *node, char c)
{
	int		i;

	i = 0;
	if (c == 'a')
		i = ft_issorta(node);
	if (c == 'b')
		i = ft_issortb(node);
	if (c == 'c' && node->b == NULL)
		i = ft_issorta(node);
	return (i);
}
