/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 16:29:50 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/09 10:44:30 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

double	ft_sqrt(double nb)
{
	double calc;
	double diff;

	if (nb == 0.0 || nb == 1.0)
		return (nb);
	calc = nb;
	diff = 0.0;
	while (calc != diff)
	{
		diff = calc;
		calc = 0.5 * (calc + nb / calc);
	}
	return (calc);
}

int		ft_pow(int nb, int pow)
{
	int ret;

	ret = nb;
	if (pow < 0)
		return (0);
	else if (pow == 0)
		return (1);
	while (pow-- > 1)
		ret *= nb;
	return (ret);
}
