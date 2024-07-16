/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelhoua <mbelhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:33:56 by mbelhoua          #+#    #+#             */
/*   Updated: 2024/07/15 10:27:02 by mbelhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		counter++;
		i++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	i++;
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
