/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 03:02:45 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/04 03:11:46 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int index;
	int check;

	index = 0;
	if (size == 0)
		return (0);
	while (dest[index])
	{
		index++;
	}
	if (size <= index)
		return (0);
	while (index < size - 1)
	{
		check = 0;
		dest[index] = src[check];
		check++;
		index++;
	}
	dest[index + 1] = '\0';
	return (dest);
}
