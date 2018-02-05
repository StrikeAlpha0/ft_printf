/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base64.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 22:37:57 by msharpe           #+#    #+#             */
/*   Updated: 2018/02/04 17:04:43 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_base64(unsigned char *c, int size)
{
	int i;
	char *key;
	int in[3];
   	int out[4];	
	int *num;

	key = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	in[0] = c[0];
	in[1] = size >= 2 ? c[1] : 0;
	in[2] = size >= 3 ? c[2] : 0;

	num = in[0] << 16;
	num |= in[1] << 8;
	num |= in[2] << 0;
	i = 0;
	while (i < 4)
	{
		out[4 - i++] = key[num % 64];
		num /= 64;
		write(1, key + out[i], 1); /*fd, dfsdfd, 1 for actual ssl project*/
		if (size < 2 || size < 3)
			if out[i] == 0;

	}
	return (c);
}

int		main()
{
	unsigned char *c = "Is this going to work?";
	int size = 22;

	ft_base64(c, size);
}
