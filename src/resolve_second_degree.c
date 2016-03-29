/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_second_degree.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 15:36:50 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/09 12:48:24 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

void	ft_print_soluce_reel(double a, double b, double c)
{
	double	soluce1;
	double	soluce2;

	soluce1 = (((-b) + (ft_sqrt(DELTA))) / (2 * a));
	soluce2 = (((-b) - (ft_sqrt(DELTA))) / (2 * a));
	printf("Discriminent is strictly positive, the two solution are: \n");
	printf("%lf\n%lf\n", soluce2, soluce1);
}

void	ft_print_soluce_imag(double a, double b, double c)
{
	double	tmp;

	tmp = 2 * a;
	ft_putendl("Discriminent is strictly negative, the two solution are: ");
	ft_putstr("Discriminent value is:  ");
	ft_putdouble(DELTA, 2);
	ft_putchar('\n');
	ft_putdouble((-b) / (tmp), 2);
	ft_putstr(" - ");
	ft_putdouble(((ft_sqrt(ABS(DELTA))) / (tmp)), 2);
	ft_putchar('i');
	ft_putchar('\n');
	ft_putdouble((-b) / (tmp), 2);
	ft_putstr(" + ");
	ft_putdouble(((ft_sqrt(ABS(DELTA))) / (tmp)), 2);
	ft_putchar('i');
}

void	ft_printsol_null(double a, double b, double c)
{
	double	soluce;

	(void)c;
	soluce = -b / 2 * a;
	ft_putendl("Disciminent equal to zero, solution double is: ");
	ft_putdouble(soluce, 2);
}

void	resolve_second_degree(double a, double b, double c)
{
	if (DELTA > 0)
		ft_print_soluce_reel(a, b, c);
	else if (DELTA == 0)
	{
		ft_printsol_null(a, b, c);
		ft_putchar('\n');
	}
	else
	{
		ft_print_soluce_imag(a, b, c);
		ft_putchar('\n');
	}
}
