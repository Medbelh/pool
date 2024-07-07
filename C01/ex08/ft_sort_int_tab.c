/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelhoua <mbelhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:59:07 by mbelhoua          #+#    #+#             */
/*   Updated: 2024/07/02 22:05:25 by mbelhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	p;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				p = tab[i];
				tab[i] = tab[i -1];
				tab[i -1] = p;
				swapped = 1;
				i++;
			}
		}
		size -= 1;
	}
}
