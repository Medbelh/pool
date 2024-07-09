/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelhoua <mbelhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:26:49 by mbelhoua          #+#    #+#             */
/*   Updated: 2024/07/09 16:54:25 by mbelhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	len(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	verif_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (len(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 1 + i;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	change(char *tab, int i)
{
	while (i > 0)
	{
		i--;
		write(1, &tab[i], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	num;
	char		tab[212];
	int			i;

	num = (long int)nbr;
	if (verif_base(base) == 0)
		return ;
	if (num == 0)
		putchar(base[0]);
	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	i = 0;
	while (num > 0)
	{
		tab[i] = base[(num % len(base))];
		num = num / len(base);
		i++;
	}
	change(tab, i);
}

int main()
{
	ft_putnbr_base(50, "0123456789abcdef");
}
