/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnode.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:07:41 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/26 15:20:23 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_printnodea(t_node *node)
{
	t_lsta	*tmp;

	if (node->a)
	{
		ft_putnbrl(node->a->na);
		tmp = node->a->next;
		while (tmp != node->a)
		{
			ft_putnbrl(tmp->na);
			tmp = tmp->next;
		}
	}
}

void		ft_printnodeb(t_node *node)
{
	t_lstb	*tmp;

	if (node->b)
	{
		ft_putstr("        ");
		ft_putnbrl(node->b->nb);
		tmp = node->b->next;
		while (tmp != node->b)
		{
			ft_putstr("        ");
			ft_putnbrl(tmp->nb);
			tmp = tmp->next;
		}
	}
}

void		ft_printnodestr(t_node *node)
{
	t_str	*tmp;

	if (node->str)
	{
		tmp = node->str;
		while (tmp)
		{
			if (ft_concatmove(tmp, node))
				tmp = tmp->next;
			else
			{
				if (node->cflag)
					ft_putstrcolor(tmp->str);
				else
					ft_putstr(tmp->str);
			}
			if (tmp->next)
				ft_putchar(' ');
			tmp = tmp->next;
		}
		ft_putchar('\n');
	}
}

void		ft_printnodec(t_node *node)
{
	ft_putstr(C_BLUE);
	ft_putendl("------------");
	ft_putendl("|||STACKA|||");
	ft_printnodea(node);
	ft_putstr(C_RED);
	ft_putendl("------------");
	ft_putendl("|||STACKB|||");
	ft_printnodeb(node);
	ft_putstr(C_NONE);
}

void		ft_printnode(t_node *node, char c)
{
	if (c == 's')
		ft_printnodestr(node);
	else if (c == 'v')
	{
		ft_putendl("------------");
		ft_putendl("|||STACKA|||");
		ft_printnodea(node);
		ft_putendl("------------");
		ft_putendl("|||STACKB|||");
		ft_printnodeb(node);
	}
	else if (c == 'c')
		ft_printnodec(node);
}
