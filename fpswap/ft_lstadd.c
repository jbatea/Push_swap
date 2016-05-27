/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:05:37 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:27:41 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_lstadda(t_node *node, int n)
{
	t_lsta		*new;

	new = (t_lsta *)malloc(sizeof(t_lsta));
	if (!new)
		exit(-1);
	new->na = n;
	if (!node->a)
	{
		new->prev = new;
		new->next = new;
		node->a = new;
	}
	else
	{
		new->prev = node->a->prev;
		new->next = node->a;
		node->a->prev->next = new;
		node->a->prev = new;
	}
}

static void		ft_lstaddstr(t_node *node, char *str)
{
	t_str		*new;
	t_str		*tmp;

	new = (t_str *)malloc(sizeof(t_str));
	if (!node || !new)
		exit(-1);
	new->str = str;
	if (!node->str)
		node->str = new;
	else
	{
		tmp = node->str;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	new->next = NULL;
}

void			ft_lstadd(t_node *node, int n, char c, char *str)
{
	if (c == 'a')
		ft_lstadda(node, n);
	if (c == 's')
		ft_lstaddstr(node, str);
}
