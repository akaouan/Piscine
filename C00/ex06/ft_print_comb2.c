/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:49:33 by akaouan           #+#    #+#             */
/*   Updated: 2021/09/28 08:08:13 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	w;
	int	q;

	w = -1;
	while (++w <= 98)
	{
		q = w;
		while (++q <= 99)
		{
			ft_putchar((w / 10) + '0');
			ft_putchar((w % 10) + '0');
			ft_putchar(' ');
			ft_putchar((q / 10) + '0');
			ft_putchar((q % 10) + '0');
			if (w != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}	
		}
	}
}
