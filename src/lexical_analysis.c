/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexical_analysis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 16:12:24 by grass-kw          #+#    #+#             */
/*   Updated: 2015/06/09 11:02:52 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

static int		check(char *str)
{
	int		i;
	long	l;

	l = ft_atol(str);
	i = 0;
	if ((l <= -2147483648LL && l >= 2147483647LL) || ft_strlen(str) > 11)
		return (1);
	if (ft_strstr(str, "-") != NULL || ft_strstr(str, ".") != NULL ||
		ft_strstr(str, ",") || ft_strstr(str, "/"))
		return (1);
	return (0);
}

static int		determine_degre(char *str, t_env *e)
{
	char	*tmp;
	int		degree;

	tmp = NULL;
	if (ft_strstr(str, "X") == NULL || ft_strstr(str, "X^0") != NULL
	|| ft_strstr(str, "X ") != NULL)
	{
		e->degree = (e->degree < 0) ? 0 : e->degree;
		return (0);
	}
	else
	{
		tmp = ft_strstr(str, "X^");
		tmp += 2;
		if (check(tmp))
			ft_error(0, e);
		degree = ft_atoi(tmp);
		e->degree = (e->degree < degree) ? degree : e->degree;
		return (degree);
	}
}

static t_poly	*parse_exp(char *str, t_env *e)
{
	t_poly	*ret;
	int		i;
	int		start;

	ret = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			start = i;
			i++;
		}
		else
			start = i;
		while (str[i] && (str[i] != '+' && str[i] != '-'))
			i++;
		e->token_tmp = ft_strsub(str, start, i - start);
		e->new_elem = ft_polynew(e->token_tmp
			, determine_degre(e->token_tmp, e));
		ft_polyadd(&ret, e->new_elem);
		ft_strclean(e->token_tmp);
	}
	return (ret);
}

void			lexical_analysis(t_env *e, char *str)
{
	char	*fmt;
	char	**tab;

	tab = NULL;
	if (ft_strstr(str, "=") != NULL)
	{
		tab = ft_strsplit(str, '=');
		e->left = parse_exp(tab[0], e);
		e->right = parse_exp(tab[1], e);
		ft_free_tab(tab);
	}
	else
		ft_error(0, e);
}
