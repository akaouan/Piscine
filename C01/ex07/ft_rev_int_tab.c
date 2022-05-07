/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:50:38 by akaouan           #+#    #+#             */
/*   Updated: 2021/09/26 14:03:46 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	save;
	int	ft_int;
	int	lst_int;

	save = 0;
	ft_int = 0;
	lst_int = (size - 1);
	while (ft_int < lst_int)
	{
		save = tab[ft_int];
		tab[ft_int] = tab[lst_int];
		tab[lst_int] = save;
		lst_int--;
		ft_int++;
	}
}
