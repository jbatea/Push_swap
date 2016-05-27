/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:09:10 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/22 19:34:56 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_outofint(long int res, int sign, int *arg, t_node *node)
{
	if ((res * sign) < INT_MIN || (res * sign) > INT_MAX)
		ft_exit(arg, node, -1);
}

int				ft_whichsign(char c)
{
	int			sign;

	sign = 1;
	if (c == '-')
		sign = -sign;
	return (sign);
}

int				ft_strtoi(const char *str, int *arg, t_node *node)
{
	int			i;
	long int	res;
	int			sign;
	char		*s;

	i = 0;
	res = 0;
	s = ft_strtrimall(str);
	sign = ft_whichsign(s[i]);
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (ft_isdigit(s[i]) == 0)
		{
			ft_strdel(&s);
			return (sign * res);
		}
		res = res * 10 + s[i] - '0';
		i++;
	}
	ft_strdel(&s);
	ft_outofint(res, sign, arg, node);
	return (sign * res);
}
