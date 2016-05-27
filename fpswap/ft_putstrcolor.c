/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrcolor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:08:03 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/13 16:30:09 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstrcolor(char *str)
{
	if (!ft_strcmp(str, "sa"))
		ft_putstr(C_BLUE);
	if (!ft_strcmp(str, "sb"))
		ft_putstr(C_RED);
	if (!ft_strcmp(str, "ra"))
		ft_putstr(C_GREEN);
	if (!ft_strcmp(str, "pb"))
		ft_putstr(C_BROWN);
	if (!ft_strcmp(str, "rra"))
		ft_putstr(C_MAGENTA);
	if (!ft_strcmp(str, "pa"))
		ft_putstr(C_CYAN);
	if (!ft_strcmp(str, "rb"))
		ft_putstr(C_GRAY);
	if (!ft_strcmp(str, "rrb"))
		ft_putstr(C_BLACK);
	ft_putstr(C_BOLD);
	if (!ft_strcmp(str, "rrr"))
		ft_putstr(C_RED);
	if (!ft_strcmp(str, "rr"))
		ft_putstr(C_BROWN);
	if (!ft_strcmp(str, "ss"))
		ft_putstr(C_GREEN);
	ft_putstr(str);
	ft_putstr(C_NONE);
}
