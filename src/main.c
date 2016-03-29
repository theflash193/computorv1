/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/05 16:52:59 by zsina             #+#    #+#             */
/*   Updated: 2015/06/09 10:50:54 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

int	main(int ac, char *av[])
{
	t_env	e;

	e.degree = 0;
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		lexical_analysis(&e, av[1]);
		reduce_form(&e);
		resolve_equation(&e);
		clear_env(&e);
	}
	return (0);
}
