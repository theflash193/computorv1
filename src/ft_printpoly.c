/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoly.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 17:10:38 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/09 11:56:34 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

void	ft_printpoly(t_poly **begin_lst)
{
	t_poly	*tmp;

	tmp = *begin_lst;
	while (tmp)
	{
		ft_putstr("token : ");
		ft_putstr(tmp->token);
		ft_putstr(" type : ");
		ft_putnbr(tmp->type);
		ft_putendl("");
		tmp = tmp->next;
	}
}
