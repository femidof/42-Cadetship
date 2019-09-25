/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 22:03:01 by oldurosi          #+#    #+#             */
/*   Updated: 2019/09/24 21:54:59 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*xb;

	i = 0;
	xb = (unsigned char *)b;
	while (len--)
	{
		xb[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int main(void)
{
	char art[50]="We are who we are really";
	ft_memset(art, 'd', 4);
	printf("My test gives= %s", art);
	return (0);
}
