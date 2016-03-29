/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 01:42:57 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/02 03:00:59 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

void	clear_env(t_env *e)
{
	ft_polydel(&e->left);
	ft_polydel(&e->right);
	free((void *)e->tab);
	e->tab = NULL;
}
