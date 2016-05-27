/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:55:00 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:21:21 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_lstadelone(t_lsta *node)
{
	node->prev->next = node->next;
	node->next->prev = node->prev;
	free(node);
}

void		ft_lstbdelone(t_lstb *node)
{
	node->prev->next = node->next;
	node->next->prev = node->prev;
	free(node);
}

void		ft_lstdelonea(t_node *node)
{
	if (node->a->next != node->a)
	{
		ft_lstadelone(node->a);
		node->a = node->a->next;
	}
	else
	{
		free(node->a);
		node->a = NULL;
	}
}

void		ft_lstdelone(t_node *node, char c)
{
	if (c == 'a')
		ft_lstdelonea(node);
	if (c == 'b')
	{
		if (node->b->next != node->b)
		{
			ft_lstbdelone(node->b);
			node->b = node->b->next;
		}
		else
		{
			free(node->b);
			node->b = NULL;
		}
	}
}
