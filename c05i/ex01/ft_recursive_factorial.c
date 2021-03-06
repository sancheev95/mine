/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:40:37 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/07 04:46:22 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int recursive;

	if (nb < 1)
		return (1);
	else
	{
		recursive = nb  * ft_recursive_factorial(nb - 1);
	}
	return (recursive);
}

int main(void)
{
	printf("%d", ft_recursive_factorial(0));
}
