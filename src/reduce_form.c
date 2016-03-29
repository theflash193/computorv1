/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce_form.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 21:10:52 by anonymous         #+#    #+#             */
/*   Updated: 2015/06/09 12:18:29 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

void			sign_to_format(double nbr, int mode)
{
	double	tmp;

	tmp = ABS(nbr);
	if (nbr < 0)
	{
		ft_putstr("- ");
		ft_putdouble(tmp, 2);
	}
	else if (mode == 0)
		ft_putdouble(nbr, 2);
	else
	{
		ft_putstr("+ ");
		ft_putdouble(tmp, 2);
	}
}

static void		print_reduce_form(t_env *e)
{
	int		i;
	double	tmp;

	i = 0;
	ft_putstr("Reduced form: ");
	while (i < (e->degree + 1))
	{
		sign_to_format(e->tab[i], i);
		ft_putstr(" * X^");
		ft_putnbr(i);
		ft_putchar(' ');
		i++;
	}
	ft_putendl("= 0");
}

static double	calcul_value(t_env *e, int mode)
{
	double value;

	value = 0;
	value = calcul_add_value(e->left, mode, 1) +
	calcul_add_value(e->right, mode, 0);
	return (value);
}

static void		determine_reduce_form(t_env *e)
{
	int		i;

	i = 0;
	e->tab = (double *)malloc(sizeof(double) * (e->degree + 1));
	while (i < e->degree + 1)
	{
		e->tab[i] = calcul_value(e, i);
		i++;
	}
}

void			reduce_form(t_env *e)
{
	int i;

	i = 0;
	determine_reduce_form(e);
	print_reduce_form(e);
	ft_putstr("Polynomial degree: ");
	ft_putnbr(e->degree);
	ft_putchar('\n');
}
