/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:28:25 by akaouan           #+#    #+#             */
/*   Updated: 2021/10/09 11:28:23 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	print_params(int i, char **str)
{
	int	j;

	j = 1;
	while (j < i)
	{
		ft_putstr(str[j]);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*p;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				p = argv[i];
				argv[i] = argv[j];
				argv[j] = p;
			}
			j++;
		}
		i++;
	}
	print_params(argc, argv);
}
