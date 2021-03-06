/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 00:47:57 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/05 00:49:55 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		index++;
	}
	if (str[index] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
