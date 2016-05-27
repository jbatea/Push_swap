/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concatmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 18:51:34 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 16:06:44 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_checklastmove(t_str *tmp, t_node *node)
{
	if (!ft_strcmp(tmp->str, "rra") && !ft_strcmp(tmp->next->str, "rrb"))
	{
		if (node->cflag)
			ft_putstrcolor("rrr");
		ft_putstr("rrr");
		return (1);
	}
	if (!ft_strcmp(tmp->str, "rrb") && !ft_strcmp(tmp->next->str, "rra"))
	{
		if (node->cflag)
			ft_putstrcolor("rrr");
		ft_putstr("rrr");
		return (1);
	}
	return (0);
}

int		ft_checkmidmove(t_str *tmp, t_node *node)
{
	if (!ft_strcmp(tmp->str, "ra") && !ft_strcmp(tmp->next->str, "rb"))
	{
		if (node->cflag)
			ft_putstrcolor("rr");
		else
			ft_putstr("rr");
		return (1);
	}
	if (!ft_strcmp(tmp->str, "rb") && !ft_strcmp(tmp->next->str, "ra"))
	{
		if (node->cflag)
			ft_putstrcolor("rr");
		else
			ft_putstr("rr");
		return (1);
	}
	return (0);
}

int		ft_concatmove(t_str *tmp, t_node *node)
{
	if (tmp->str && tmp->next && tmp->next->str)
	{
		if (!ft_strcmp(tmp->str, "sa") && !ft_strcmp(tmp->next->str, "sb"))
		{
			if (node->cflag)
				ft_putstrcolor("ss");
			else
				ft_putstr("ss");
			return (1);
		}
		if (!ft_strcmp(tmp->str, "sb") && !ft_strcmp(tmp->next->str, "sa"))
		{
			if (node->cflag)
				ft_putstrcolor("ss");
			else
				ft_putstr("ss");
			return (1);
		}
		if (ft_checkmidmove(tmp, node))
			return (1);
		if (ft_checklastmove(tmp, node))
			return (1);
	}
	return (0);
}
