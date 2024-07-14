/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelhoua <mbelhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:05:21 by mbelhoua          #+#    #+#             */
/*   Updated: 2024/07/14 09:57:58 by mbelhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	if (nb > 0)
	{
		while (a <= 46360)
		{
			if (ft_power(a, 2) == nb)
				return (a);
			a++;
		}
	}
	return (0);
}
