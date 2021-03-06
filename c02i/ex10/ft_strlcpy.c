/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:22:11 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/05 01:30:34 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		index;

	index = 0;
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (index);
}
