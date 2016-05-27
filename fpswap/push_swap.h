/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbateau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 16:09:22 by jbateau           #+#    #+#             */
/*   Updated: 2016/05/25 16:58:13 by jbateau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct		s_lsta
{
	int				na;
	struct s_lsta	*prev;
	struct s_lsta	*next;
}					t_lsta;

typedef struct		s_lstb
{
	int				nb;
	struct s_lstb	*prev;
	struct s_lstb	*next;
}					t_lstb;

typedef struct		s_str
{
	char			*str;
	struct s_str	*next;
}					t_str;

typedef struct		s_node
{
	t_lsta			*a;
	t_lstb			*b;
	t_str			*str;
	int				vflag;
	int				cflag;
}					t_node;

# define C_NONE		"\033[0m"
# define C_BOLD		"\033[1m"
# define C_BLACK	"\033[30m"
# define C_RED		"\033[31m"
# define C_GREEN	"\033[32m"
# define C_BROWN	"\033[33m"
# define C_BLUE		"\033[34m"
# define C_MAGENTA	"\033[35m"
# define C_CYAN		"\033[36m"
# define C_GRAY		"\033[37m"

void				ft_lstadd(t_node *node, int n, char c, char *str);
void				ft_lstaddall(t_node *node, int *arg, int nbarg);
void				ft_getarg(char **av, int *arg, t_node *node);
void				ft_checkarg(char *str, int *arg, t_node *node);
void				ft_checkdup(int *arg, t_node *node, int ac);
int					ft_strtoi(const char *str, int *arg, t_node *node);
void				ft_exit(int *arg, t_node *node, int ret);
void				ft_nodefree(t_node *node);
void				ft_sa(t_node *node);
void				ft_ra(t_node *node);
void				ft_rra(t_node *node);
void				ft_printnode(t_node *node, char c);
int					ft_issort(t_node *node, char c);
void				ft_resolve(t_node *node, int *arg);
int					ft_getflag(char *str, t_node *node, int *arg);
void				ft_putstrcolor(char *str);
void				ft_pa(t_node *node);
void				ft_pb(t_node *node);
void				ft_sb(t_node *node);
void				ft_rb(t_node *node);
void				ft_rrb(t_node *node);
void				ft_findbestvalue(t_node *node);
int					ft_highestval(t_node *node, char c);
int					ft_concatmove(t_str *tmp, t_node *node);
void				ft_lstdelone(t_node *node, char c);
void				ft_lstadd_top(t_node *node, int n, char c);
t_node				*ft_lstinit(void);
void				ft_strdel(char **as);
size_t				ft_strlen(const char *s);
char				*ft_strtrimall(char const *s);
int					ft_isdigit(int c);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_putendl(char const *str);
void				ft_putnbrl(int n);
void				ft_putnbr(int n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_atoi(const char *str);

#endif
