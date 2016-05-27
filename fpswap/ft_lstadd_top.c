/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:54:23 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:00:03 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_lstaadd_top(t_node *node, int n)
{
	t_lsta	*new;

	new = (t_lsta *)malloc(sizeof(t_lsta));
	if (!new || !node)
		exit(-1);
	new->na = n;
	if (node->a)
	{
		new->prev = node->a->prev;
		node->a->prev->next = new;
		new->next = node->a;
		node->a->prev = new;
		node->a = new;
	}
	else
	{
		node->a = new;
		new->prev = new;
		new->next = new;
	}
}

void		ft_lstbadd_top(t_node *node, int n)
{
	t_lstb	*new;

	new = (t_lstb *)malloc(sizeof(t_lstb));
	if (!new || !node)
		exit(-1);
	new->nb = n;
	if (node->b)
	{
		new->prev = node->b->prev;
		node->b->prev->next = new;
		new->next = node->b;
		node->b->prev = new;
		node->b = new;
	}
	else
	{
		node->b = new;
		new->prev = new;
		new->next = new;
	}
}

void		ft_lstadd_top(t_node *node, int n, char c)
{
	if (c == 'a')
		ft_lstaadd_top(node, n);
	else
		ft_lstbadd_top(node, n);
}
