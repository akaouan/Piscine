/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 08:10:47 by akaouan           #+#    #+#             */
/*   Updated: 2021/09/30 17:59:24 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_non_printable(char c)
{
	if (c <= 31 || c >= 127)
		return (1);
	return (0);
}

void	print_hex(unsigned char n)
{
	if ((n / 16) < 10)
		ft_putchar((n / 16) + '0');
	else
		ft_putchar((n / 16) + 87);
	if ((n % 16) < 10)
		ft_putchar((n % 16) + '0');
	else
		ft_putchar((n % 16) + 87);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*cnv_str;
	int				i;

	cnv_str = (unsigned char *) str;
	i = 0;
	while (str[i])
	{
		if (is_non_printable(cnv_str[i]))
		{
			ft_putchar('\\');
			print_hex(cnv_str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
