/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:24:24 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 04:39:48 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int i;
	int answer;
	

	i = 1;
	answer = 1;
	while (i <= nb)
	{
		answer = answer * i;
		i++;
	}
	return (answer);
}

int main(void)
{
	printf("%d", ft_iterative_factorial(6));
	return 0;
}


