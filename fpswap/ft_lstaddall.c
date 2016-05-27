/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:05:57 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/13 16:15:25 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_lstaddall(t_node *node, int *arg, int nbarg)
{
	int		i;

	i = 0;
	nbarg--;
	if (node->vflag)
		nbarg--;
	if (node->cflag)
		nbarg--;
	while (i < nbarg)
	{
		ft_lstadd(node, arg[i], 'a', NULL);
		i++;
	}
}
