/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 13:53:12 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/25 13:02:15 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libftprintf.h"
/*
** Table: d:print int digits, D:long ints, i:print int digits, u:unsigned int
** U:unsigned long int, o:octal conversion, O:long octal conversion,
** x:lowercase hex X:uppercase hex, f:convert/print float,
** F:convert/print upper(?) float, c:print char, C:print wide char,
** s:print string, S:print wide string, p:print address, %:print a %
*/

/* 
** D-print long ints(Currently has predicted output/ SysPrintf returns
** unsigned int however?
*/
/*
void		wub(void)
{
	ft_putchar('X');
}
*/
t_printf_struct g_spec_table[] =
{
	{'d', ft_per_doi},
	{'D', ft_per_dup},
	{'i', ft_per_doi},
	{'u', ft_per_u},
	{'U', ft_per_uup},
	{'o', ft_per_o},
	{'O', ft_per_oup},
	{'x', ft_per_x},
	{'X', ft_per_xup},
//	{'f', ft_per_f},
//	{'F', ft_per_f},
//	{'e', wub},
//	{'E', wub},
//	{'g', wub},
//	{'G', wub},
//	{'a', wub},
//	{'A', wub},
	{'c', ft_per_c},
	{'C', ft_per_c},
	{'s', ft_per_s},
	{'S', ft_per_s},
//	{'p', ft_per_p},
//	{'n', wub},
	{'%', ft_per_per}
};
/*
** Suffix addition of spaces, prefix addition of +/-, prefix:space,
** prefix of zero for octal/hex, prefix:0's
*/
t_printfflag_struct g_flag_table[] =
{
	{'-', ft_flag_minus},
	{'+', ft_flag_plus},
	{' ', ft_flag_space},
	{'#', ft_flag_hash},
	{'0', ft_flag_zero}
};

static void		spec_table(va_list *list, const char *format, t_inputinfo *info, t_passinfo *pass)
{
	info->tsearch = 0;
	while (format[info->i] != g_spec_table[info->tsearch].name && g_spec_table[info->tsearch].name != '\0')
		info->tsearch++;
	if (format[info->i] == g_spec_table[info->tsearch].name && g_spec_table[info->tsearch].name != '\0')
		g_spec_table[info->tsearch].function(list, info, pass);
	else
		ft_putchar(format[info->i]);
	info->i++;
}

static void		search_width(va_list *list, const char *format, t_inputinfo *info, t_passinfo *pass)
{
	if (info->x >= 1)
		return ;
	if (format[info->i] >= '1' && format[info->i] <= '9')
	{
		pass->width = ft_atoi(format + info->i);
		while (format[info->i] >= '0' && format[info->i] <= '9')
			info->i++;
	}
	spec_table(list, format, info, pass);
}

static void 	search_specs(va_list *list, const char *format, t_inputinfo *info, t_passinfo *pass)
{
	while (format[info->i] != g_flag_table[info->tsearch].name && g_flag_table[info->tsearch].name != '\0')
		info->tsearch++;
	if(format[info->i] == g_flag_table[info->tsearch].name && g_flag_table[info->tsearch].name != '\0')
	{
			info->flag[info->f] = format[info->i];
			info->f++;
			info->i++;
			search_specs(list, format, info, pass);
			info->x = 1;
	}
	search_width(list, format, info, pass);
}

/*
static void		special_mod(.........)
{

}
*/

static void		reset(t_inputinfo *info, t_passinfo *pass)
{
	pass->width = 0;
	info->f = 0;
	ft_bzero(info->flag, 10);
	info->tsearch = 0;
	info->x = 0;
	info->switch1 = 0;
}

int		ft_printf(const char *format, ...)
{
	va_list list;
	t_passinfo pass;
	t_inputinfo input;
	
	initialize_it_all(&pass, &input);
		
	va_start(list, format);
	while (format[input.i] != '\0')
	{
		if(format[input.i] == '%')
		{
			input.i++;
			input.search = format[input.i];
			search_specs(&list, format, &input, &pass);
			reset(&input, &pass);
		}
		else
		{
			ft_putchar(format[input.i]);
			input.i++;
		}
	}
	va_end (list);
	return (0);
}
