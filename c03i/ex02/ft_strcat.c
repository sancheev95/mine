/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:28:27 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/04 03:15:00 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int source;

	index = 0;
	source = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[source] != '\0')
	{
		dest[index] = src[source];
		index++;
		source++;
	}
	dest[index + 1] = '\0';
	return (dest);
}
