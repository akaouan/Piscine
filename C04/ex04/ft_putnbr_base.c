/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:26:14 by akaouan           #+#    #+#             */
/*   Updated: 2021/10/05 09:57:31 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	check_base_char_re(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{	
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	num;

	num = nbr;
	base_len = ft_strlen(base);
	if (check_base_char_re(base) && base_len > 1)
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num *= -1;
		}
		if (num >= base_len)
			ft_putnbr_base(num / base_len, base);
		write(1, &base[num % base_len], 1);
	}
}
