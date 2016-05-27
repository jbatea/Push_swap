/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:03:28 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/26 15:15:50 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_cntflag(t_node *node, int ac, int *arg)
{
	if (node->cflag)
		ac--;
	if (node->vflag)
		ac--;
	if (ac == 1)
	{
		node->cflag = 0;
		node->vflag = 0;
		free(node);
		node = NULL;
		ft_exit(arg, node, 0);
	}
	return (ac);
}

int			main(int ac, char **av)
{
	t_node		*node;
	int			*arg;

	node = NULL;
	arg = NULL;
	if (ac == 1)
		return (0);
	if (ac > 1)
	{
		arg = (int *)malloc(sizeof(int) * (ac - 1));
		node = ft_lstinit();
	}
	if (!arg || !node)
		ft_exit(arg, node, -1);
	ft_getarg(av, arg, node);
	ft_checkdup(arg, node, ac);
	ft_lstaddall(node, arg, ac);
	free(arg);
	ft_cntflag(node, ac, arg);
	if (ft_issort(node, 'c'))
		ft_exit(arg, node, 1);
	ft_resolve(node, arg);
	return (1);
}
