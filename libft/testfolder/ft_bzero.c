/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:59:07 by oldurosi          #+#    #+#             */
/*   Updated: 2019/09/24 22:48:54 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n--)
	{
		str[i] = 0;
		i++;
	}
}

int main(void)
{
	int i;
	int arr[5];
	ft_bzero(arr, sizeof(int)*5);
	for(i = 0; i < 5 ; i++)
		printf("%i = %i\n", i,arr[i]);
	return (0);
}
