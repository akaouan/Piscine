/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:12:01 by akaouan           #+#    #+#             */
/*   Updated: 2021/10/05 09:49:37 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_space(char c)
{
	if ((c <= 13 && c >= 9) || c == ' ')
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	mns;

	i = 0;
	number = 0;
	mns = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mns++;
		i++;
	}
	while (is_num(str[i]))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (mns % 2 != 0 || mns == 1)
		return (number * -1);
	else
		return (number);
}
