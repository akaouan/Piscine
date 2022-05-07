/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:06:15 by akaouan           #+#    #+#             */
/*   Updated: 2021/10/12 17:30:53 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	con(int size, char **strs, char *sep, char *p)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			p[k] = strs[i][j++];
			k++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			p[k] = sep[j++];
			k++;
		}
		i++;
	}
	p[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len_all;
	char	*p;

	i = 0;
	len_all = 0;
	if (size == 0)
	{
		p = malloc(sizeof(char));
		*p = 0;
		return (p);
	}
	while (i < size)
	{
		len_all += ft_strlen(strs[i]);
		i++;
	}
	len_all += ft_strlen(sep) * (size - 1);
	p = malloc(sizeof(char) * len_all + 1);
	if (!p)
		return (0);
	con(size, strs, sep, p);
	return (p);
}
