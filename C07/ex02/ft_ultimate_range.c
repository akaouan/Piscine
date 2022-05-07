/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:49:34 by akaouan           #+#    #+#             */
/*   Updated: 2021/10/12 17:30:07 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	i;
	int	size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	a = 0;
	while (min < max)
	{
		range[a][i] = min;
		min++;
		i++;
	}
	return (size);
}
