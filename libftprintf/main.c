/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 13:30:32 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/30 20:45:00 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...);

int main()
{
//	char *str = "%d%D%i%u%U%o%O%x%XfFeE%%gGaA%c%C%s%S%pn";
	int num = -8000;
	int bacon = 42;
	char *str = "wub";
	char *derp;
	//ft_print_hex(num);
//	char *duck = "-+ #0";
	char Ok = 'K';
	char *s = "*Kashim a � histoires à raconterIl fait au moins";
	//ft_printf(str);
//	ft_printf("duck%010d", num);
//	ft_printf("%dKashim a %d histoires à raconterIl fait au moins %d\n", 42, 1001, -8000);
//	printf("%dKashim a %d histoires à raconterIl fait au moins %d", 42, 1001, -8000);
//	ft_printf("%ld This is my printf ", 10000000000);
//	printf("\n%ld", 10000000000);
//	ft_printf("% i %7d", bacon, num);
	long long llvalue = 18446744073709486080;	// llvalue =
	int test = 0;
	unsigned char a = 131;
	ft_printf("a = %hhu sizeof a = %lu\n", a, sizeof(a));
	printf("a = %hhu sizeof a = %lu\n", a, sizeof(a));
	
	return (0);
}
