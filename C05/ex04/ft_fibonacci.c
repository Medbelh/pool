/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelhoua <mbelhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:59 by mbelhoua          #+#    #+#             */
/*   Updated: 2024/07/14 09:57:46 by mbelhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
