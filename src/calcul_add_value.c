/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_add_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 11:05:32 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/09 12:19:22 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

double	calcul_add_value(t_poly *a, int mode, int left)
{
	t_poly	*tmp;
	double	value;
	char	*str_trim;

	value = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->type == mode)
		{
			str_trim = ft_strtrim(tmp->token);
			if (left == 1)
				value += (ft_atof(str_trim));
			else
				value += (ft_atof(str_trim) * -1.0);
			ft_strclean(str_trim);
		}
		tmp = tmp->next;
	}
	return (value);
}
