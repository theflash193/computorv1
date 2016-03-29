/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_equation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 21:11:21 by anonymous         #+#    #+#             */
/*   Updated: 2015/06/09 11:51:00 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

void	resolve_equation(t_env *e)
{
	if (e->degree == 1)
		resolve_first_degree(e->tab[1], e->tab[0]);
	else if (e->degree == 2)
		resolve_second_degree(e->tab[2], e->tab[1], e->tab[0]);
	else
	{
		ft_putstr("The polynomial degree is stricly greater ");
		ft_putstr(" than 2, I can't solve.\n");
	}
}
