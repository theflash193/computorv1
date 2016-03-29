/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_polynew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 16:58:07 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/09 10:20:15 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

t_poly	*ft_polynew(char *str, int type)
{
	t_poly	*ret;

	if ((ret = (t_poly *)malloc(sizeof(t_poly))) == NULL)
		return (NULL);
	ret->token = ft_strdup(str);
	ret->type = type;
	ret->next = NULL;
	return (ret);
}
