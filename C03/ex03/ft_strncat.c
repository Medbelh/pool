/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelhoua <mbelhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:01:08 by mbelhoua          #+#    #+#             */
/*   Updated: 2024/07/07 18:05:03 by mbelhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	p;

	i = 0;
	p = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (p < nb && src[p] != '\0')
	{
		dest[i + p] = src[p];
		p++;
	}
	dest[i + p] = '\0';
	return (dest);
}
