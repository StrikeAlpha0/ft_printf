/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:13:58 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 17:41:40 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

float long		ft_atoif(const char *str)
{
	int i;
	float long num;
	int sign;

	i = 0;
	num = 0;
	sign = 1;
	if (*(str + i) == '-')
		sign = -1;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		num = num * 10 + (*(str + i++) - '0');
	if (*(str + i) == '.')
		num = num * 10 + (*(str + i++) - '0');
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		num = num * 10 + (*(str + i++) - '0'); 
	return (num * sign);
}
