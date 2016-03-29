/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_polydel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 01:57:05 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/09 10:19:37 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

static void	ft_polydelone(t_poly **alst)
{
	if (*alst != NULL)
	{
		ft_strclean((*alst)->token);
		free(*alst);
		*alst = NULL;
	}
}

void		ft_polydel(t_poly **alst)
{
	t_poly	*tmp;
	t_poly	*tmp2;

	tmp = *alst;
	while (tmp)
	{
		tmp2 = tmp->next;
		ft_polydelone(&tmp);
		tmp = tmp2;
	}
	*alst = NULL;
}
