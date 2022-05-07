/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:04:01 by akaouan           #+#    #+#             */
/*   Updated: 2021/10/13 14:39:36 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!p)
		return (0);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tr;

	i = 0;
	tr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tr)
	{
		tr = NULL;
		return (tr);
	}
	while (i < ac)
	{
		tr[i].size = ft_strlen(av[i]);
		tr[i].str = av[i];
		tr[i].copy = ft_strdup(av[i]);
		i++;
	}
	tr[i].size = 0;
	tr[i].str = 0;
	tr[i].copy = 0;
	return (tr);
}
