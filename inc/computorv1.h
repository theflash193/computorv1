/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computorv1.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 18:22:41 by zsina             #+#    #+#             */
/*   Updated: 2015/06/09 11:17:53 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTORV1_H
# define COMPUTORV1_H
# include <libft.h>
# include <stdio.h>

# define DELTA ((b * b) - (4 * a * c))
# define ABS(x) ((x) < 0 ? -(x) : (x))

typedef struct		s_poly
{
	char			*token;
	int				type;
	struct s_poly	*next;
}					t_poly;

typedef struct		s_env
{
	char			*token_tmp;
	char			*token_trim;
	t_poly			*left;
	t_poly			*right;
	t_poly			*new_elem;
	double			*tab;
	int				degree;
}					t_env;

void				lexical_analysis(t_env *e, char *str);
void				reduce_form(t_env *e);
void				resolve_equation(t_env *e);
t_poly				*ft_polynew(char *str, int type);
void				ft_polyadd(t_poly **begin_list, t_poly *elem);
void				ft_printpoly(t_poly **begin_lst);
double				ft_atof(char const *const src);
void				ft_putdouble(double n, size_t afterpoint);
long				ft_atol(const char *str);
void				resolve_first_degree(double a, double b);
void				resolve_second_degree(double a, double b, double c);
void				ft_error(int i, t_env *e);
void				clear_env(t_env *e);
void				ft_polydel(t_poly **alst);
double				ft_sqrt(double nb);
void				sign_to_format(double nbr, int mode);
int					ft_pow(int nb, int pow);
double				calcul_add_value(t_poly *a, int mode, int left);

#endif
