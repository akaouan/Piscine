/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:04:39 by akaouan           #+#    #+#             */
/*   Updated: 2021/10/12 13:03:17 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	p = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		return (0);
	}
	if (!p)
		return (0);
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
