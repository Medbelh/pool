/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelhoua <mbelhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:34:14 by mbelhoua          #+#    #+#             */
/*   Updated: 2024/07/15 17:56:26 by mbelhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*result;

	i = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(int) * len);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
