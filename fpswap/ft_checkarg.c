/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:04:34 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/13 16:18:14 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checkarg(char *str, int *arg, t_node *node)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (*str == '\0' || (i == 1 && str[i] == '\0'))
		ft_exit(arg, node, -1);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_exit(arg, node, -1);
		i++;
	}
	ft_strtoi(str, arg, node);
}
