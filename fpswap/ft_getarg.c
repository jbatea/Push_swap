/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:05:11 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/13 16:11:59 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_getarg(char **av, int *arg, t_node *node)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		if (ft_getflag(av[i], node, arg))
			i++;
		else
		{
			ft_checkarg(av[i], arg, node);
			arg[j] = ft_atoi(av[i]);
			i++;
			j++;
		}
	}
}
