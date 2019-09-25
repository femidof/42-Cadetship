/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:08:02 by oldurosi          #+#    #+#             */
/*   Updated: 2019/09/25 00:31:35 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <string.h>
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*xdst;
	unsigned char	*xsrc;

	i = 0;
	xdst = (unsigned char *)dst;
	xsrc = (unsigned char *)src;
	while (i < n && xsrc[i] != '\0')
	{
		xdst[i] = xsrc[i];
		i++;
	}
	return (dst);
}

int main(void)
{
	char str1[50] = "HOW ARE YOU?";
	char str2[30] = "I AM FINE";
	ft_memcpy(str1,str2, 5);
	printf("%s\n",str1);
	return (0);
}
