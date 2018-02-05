/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 13:30:32 by msharpe           #+#    #+#             */
/*   Updated: 2018/02/04 18:22:26 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...);

int main()
{
//	char *str = "%d%D%i%u%U%o%O%x%XfFeE%%gGaA%c%C%s%S%pn";
//	int num = -8000;
//	int bacon = 42;
//	char *str = "wub";
//	char *derp;
	//ft_print_hex(num);
//	char *duck = "-+ #0";
//	char Ok = 'K';
//	char *s = "*Kashim a � histoires à raconterIl fait au moins";
	//ft_printf(str);
//	ft_printf("duck%010d", num);
//	ft_printf("%dKashim a %d histoires à raconterIl fait au moins %d\n", 42, 1001, -8000);
//	printf("%dKashim a %d histoires à raconterIl fait au moins %d", 42, 1001, -8000);
//	ft_printf("%ld This is my printf ", 10000000000);
//	printf("\n%ld", 10000000000);
//	ft_printf("% i %7d", bacon, num);
//	int llvalue = 18446744073709551491;	// llvalue =
//	int a = 131;
//	char *str = "食べる";
//	char *s = "서울";
//	char *t = "سعودي";
//	int test = 0;
	int q = 42;
//	char *q = "LYDI";
	char *a = "pouet pouet camembert";
	char *b = "cbhrg0cbhrg0pnzrzoreg";
//	char *b = "Ceci n'est pas un  ";
//	char *c = "Ceci n'est toujours pas un exercice ";
/*	char *d = "Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une";*/
//	char *e = 0;
//	unsigned char a = 131;
//	printf("unsigned char\t\ta = %3#hhu sizeof a = %lu\n", a, sizeof(a));
//	printf("g = %llu sizeof g = %lu\n", llvalue, sizeof(llvalue));
//	ft_printf("g = %llu sizeof g = %lu\n", llvalue, sizeof(llvalue));
//	printf("unsigned char\t\ta = %hh.5u sizeof a = %lu\n", a, sizeof(a));
//	ft_printf("unsigned char\t\ta = %hh.5u sizeof a = %lu\n", a, sizeof(a));
//	ft_printf("% 3.5d\n", a);
//	ft_printf("%s\n", e);
//	ft_printf("%s\n", q);
//	ft_printf("%s\n %s\n %s\n %s\n", a, b, c, d);
//	printf("chars counted = %d\n", printf("%s", a));
	printf("chars counted = %d\n", ft_printf("{red}%q", a));
	printf("chars counted = %d\n", ft_printf("{blue}%q", b));
	return (0);
}
