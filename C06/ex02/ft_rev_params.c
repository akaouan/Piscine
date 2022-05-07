/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:19:26 by akaouan           #+#    #+#             */
/*   Updated: 2021/10/09 09:17:54 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	last_argv;
	int	i;

	i = 0;
	last_argv = argc - 1;
	while (i < argc - 1)
	{
		ft_putstr(argv[last_argv]);
		write(1, "\n", 1);
		last_argv--;
		i++;
	}
}
