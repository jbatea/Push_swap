/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:04:43 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/13 16:17:51 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_isdup(int *arg, int n, int ac, int j)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (i == j)
			i++;
		else if (n == arg[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_checkdup(int *arg, t_node *node, int ac)
{
	int	i;

	i = 0;
	ac--;
	if (node->vflag)
		ac--;
	if (node->cflag)
		ac--;
	while (i < ac)
	{
		if (ft_isdup(arg, arg[i], ac, i))
			ft_exit(arg, node, -1);
		i++;
	}
}
