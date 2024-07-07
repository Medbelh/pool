/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelhoua <mbelhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:08:07 by mbelhoua          #+#    #+#             */
/*   Updated: 2024/07/02 20:30:24 by mbelhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	m;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		m = tab[start];
		tab[start] = tab[end];
		tab[end] = m;
		start++;
		end--;
	}
}
