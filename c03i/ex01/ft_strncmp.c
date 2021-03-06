/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svathuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:04:59 by svathuma          #+#    #+#             */
/*   Updated: 2021/03/03 22:17:16 by svathuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s1[index] == s2[index] && index < n)
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

int main(void)
{
	char *s;
	char *b;

	s = "helloaaa";
	b = "helloooo";

	printf("%d", ft_strncmp(s, b, 5));
}


