/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:33:37 by akaouan           #+#    #+#             */
/*   Updated: 2021/09/30 14:09:36 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_special(char c)
{
	if (!((is_lower(c) == 1) || (c >= 'A' && c <= 'Z') || (is_number(c) == 1)))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] += 32;
		counter++;
	}
	if (is_lower(str[0]) == 1)
		str[0] -= 32;
	counter = 1;
	while (str[counter] != '\0')
	{
		if (is_special(str[counter - 1]) && is_lower(str[counter]))
			str[counter] -= 32;
		counter++;
	}
	return (str);
}
