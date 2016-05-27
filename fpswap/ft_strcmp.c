/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:09:39 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/25 16:57:53 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (((unsigned char)s1[i] == (unsigned char)s2[i]) && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
