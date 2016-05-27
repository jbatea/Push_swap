/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:05:02 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/25 15:42:21 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printflag(t_node *node)
{
	if (node && node->vflag && node->cflag)
		ft_printnode(node, 'c');
	else if (node && node->vflag)
		ft_printnode(node, 'v');
}

void	ft_exit(int *arg, t_node *node, int ret)
{
	if (ret == 1)
	{
		ft_printflag(node);
		ft_printnode(node, 's');
		ft_nodefree(node);
	}
	if (ret == -1)
	{
		free(arg);
		free(node);
		ft_putendl("Error");
		exit(-1);
	}
	exit(0);
}
