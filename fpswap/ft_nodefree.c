/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodefree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:07:19 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 15:02:45 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_nodefreea(t_lsta *node)
{
	t_lsta	*tmp;
	t_lsta	*ptmp;

	tmp = node->next;
	while (tmp != node)
	{
		ptmp = tmp->next;
		free(tmp);
		tmp = ptmp;
	}
}

void		ft_dellsta(t_lsta **node)
{
	ft_nodefreea(*node);
	free(*node);
	node = NULL;
}

void		ft_nodefreestr(t_node *node)
{
	t_str	*tmp;
	t_str	*ptmp;

	tmp = node->str;
	while (tmp)
	{
		ptmp = tmp->next;
		free(tmp);
		tmp = ptmp;
	}
}

void		ft_nodefree(t_node *node)
{
	ft_nodefreestr(node);
	ft_dellsta(&(node->a));
	free(node);
	node = NULL;
}
