/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 18:06:27 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/22 18:39:19 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_passinfo
{
	int			n;
	int			numlen;
	int			strlen;
	int			width;
	char		*stuff;
	int 		count;
}				t_passinfo;

typedef struct	s_inputinfo
{
	char		search;
	int			tsearch;
	int			i;
	char		flag[10];
	int			f;
	int			x;
	int			count;
}				t_inputinfo;

typedef	struct	s_printf_struct
{
	char		name;
	void		(*function)(va_list *list, t_inputinfo *info, t_passinfo *pass);
}				t_printf_struct;

typedef struct	s_printfflag_struct
{
	char		name;
	void		(*function)(int n, t_inputinfo *info, t_passinfo *pass);
}				t_printfflag_struct;

int				ft_printf(const char *format, ...);
int				ft_atoi(const char *str);
//float long		ft_atoif(const char *str);
void			ft_bzero(void *s, size_t n);
void			ft_putnbr(long n, t_inputinfo *info, t_passinfo *pass);
void			ft_putstr(char const *s, t_inputinfo *info, t_passinfo *pass);
void			ft_putchar(unsigned char c);
void			ft_putnbrup(unsigned long n);
//void			ft_putnbrf(long float n, t_inputinfo *info, t_passinfo *pass);
int				ft_print_hex(unsigned long nbr, t_inputinfo *input,
		t_passinfo *pass);
int				ft_print_hexup(unsigned long nbr, t_inputinfo *input,
		t_passinfo *pass);
int				ft_print_octal(unsigned long nbr, t_inputinfo *input,
		t_passinfo *pass);
int				ft_numlen(long nbr);
void			initialize_it_all(t_passinfo *pass, t_inputinfo *input);

/*
** convert
*/

void			ft_per_x(va_list *list, t_inputinfo *info, t_passinfo *pass);
void			ft_per_xup(va_list *list, t_inputinfo *info, t_passinfo *pass);
void			ft_per_o(va_list *list, t_inputinfo *info, t_passinfo *pass);
void			ft_per_oup(va_list *list, t_inputinfo *info, t_passinfo *pass);
/*void			ft_per_p(va_list *list);
*/

/*
** flags
*/

void			ft_flag_plus(int n, t_inputinfo *info, t_passinfo *pass);
void			ft_flag_space(int n, t_inputinfo *info, t_passinfo *pass);
void			ft_flag_minus(int n, t_inputinfo *info, t_passinfo *pass);
void			ft_flag_zero(int n, t_inputinfo	*info, t_passinfo *pass);
void			ft_flag_hash(int n, t_inputinfo *info, t_passinfo *pass);

/*
** writer
*/

void			ft_per_s(va_list *list, t_inputinfo *info, t_passinfo *pass);
void			ft_per_c(va_list *list, t_inputinfo *info, t_passinfo *pass);
void			ft_per_per(va_list *list, t_inputinfo *info, t_passinfo *pass);

/*
** numbers
*/

void			ft_per_doi(va_list *list, t_inputinfo *info, t_passinfo *pass);
void			ft_per_dup(va_list *list, t_inputinfo *info, t_passinfo *pass);
void			ft_per_uup(va_list *list, t_inputinfo *info, t_passinfo *pass);
void			ft_per_u(va_list *list, t_inputinfo *info, t_passinfo *pass);
//void			ft_per_f(va_list *list, t_inputinfo *info, t_passinfo *pass);

/*
** helper
*/

void			ft_frontloadflag(long n, t_inputinfo *info, t_passinfo *pass);
void			ft_backloadflag(long n, t_inputinfo *info, t_passinfo *pass);
//void			ft_frontflagfloat(float long n, t_inputinfo *info, t_passinfo *pass);
//void			ft_backloadflagfloat(float long n, t_inputinfo *info, t_passinfo *pass);
#endif