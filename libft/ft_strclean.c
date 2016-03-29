/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 14:41:44 by anonymous         #+#    #+#             */
/*   Updated: 2015/06/09 11:27:29 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclean(char *s)
{
	if (!s)
		return ;
	else
	{
		ft_strclr(s);
		ft_strdel(&s);
	}
}
