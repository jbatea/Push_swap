/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:05:19 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/13 16:12:57 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_getflag(char *str, t_node *node, int *arg)
{
	if (!ft_strcmp("-v", str))
	{
		if (node->vflag == 1)
			ft_exit(arg, node, -1);
		node->vflag = 1;
		return (1);
	}
	if (!ft_strcmp("-c", str))
	{
		if (node->cflag == 1)
			ft_exit(arg, node, -1);
		node->cflag = 1;
		return (1);
	}
	return (0);
}
