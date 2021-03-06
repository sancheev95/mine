/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:46:51 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 04:56:23 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int i;
	int answer;

	i = 1;
	answer = nb;
	while (i <= power - 1)
	{
		answer = answer * nb;
		i++;
	}
	return (answer);
}

int main(void)
{
	printf("%d", ft_iterative_power(10, 3));
}
