/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_first_degree.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 15:23:59 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/09 11:46:51 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

void	resolve_first_degree(double a, double b)
{
	double	solution;

	if (b == 0.0 && a != 0.0)
	{
		ft_putendl("The solution is: 0");
		return ;
	}
	else if (a != 0.0)
	{
		solution = (-1.0 * b / a);
		printf("The solution is: %lf\n", solution);
	}
	else
		ft_putendl("No solution for equation");
}
