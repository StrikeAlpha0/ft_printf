/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfselector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharpe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:02:22 by msharpe           #+#    #+#             */
/*   Updated: 2018/01/15 20:31:05 by msharpe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_printf_struct
{
	char		name;
	void		(*function)(t_va_list*);
}				t_printf_struct;

typedef struct	s_printfflagfunct_struct
{
	char			name;
	unsigned int	width;
	unsigned int	precision;
};

typedef struct	s_printfdispatch_struct
{
	char		name;
	void		(*function)(t_va_list*);
}				t_printfdispatch;

typedef struct 	s_output_struct
{
	char			spec;
	int				num;
	char			flag;
	char			*str;

t_printf_struct g_flag_table[] = 
{
	{'-', ft_flag_minus}, /*suffix addition of spaces*/
    {'+', ft_flag_plus}, /*prefix addition of + or -*/
    {' ', ft_flag_space}, /*prefix addition of spaces*/
    {'#', ft_flag_hash}, /*prefix addition of 0, 0x, or 0X*/
    {'0', ft_flag_zero}  /*prefix addition of 0's*/
};

t_printf_struct g_spec_table[] =
{0
	{'d', ft_per_d}, /*print int digits*/
	{'D', ft_per_D}, /*print long ints(Currently has predicted output. APrintf returns unsigned int instead?*/
	{'i', ft_per_i}, /*same as d except 0xnum = hex conversion (scanf only)*/
	{'u', ft_per_u}, /*unsigned int*/
	{'U', ft_per_U}, /*unsigned long int*/
	{'o', ft_per_o}, /*octal conversion*/
	{'O', ft_per_O}, /*long octal conversion*/
	{'x', ft_per_x}, /*hex conversion with lowercase letters*/
	{'X', ft_per_X}, /*hex conversion with uppercase letters*/
//	{'f', wub},
//	{'F', wub},
//	{'e', wub},
//	{'E', wub},
//	{'g', wub},
//	{'G', wub},
//	{'a', wub},
//	{'A', wub},
	{'c', ft_per_c}, /*print char*/
	{'C', ft_per_c}, /*print wide char(Broken. Make a solution in extra credit section*/
	{'s', ft_per_s}, /*print string*/
	{'S', ft_per_s}, /*wide character string(Broken. Make solution in ec section*/
	{'p', ft_per_p}, /*print address (needs 0x)*/
//	{'n', wub},
	{'%', ft_per_per} /*prints percent sign*/
};

t_printf_struct g_spec2_table[] =
{
	{"hh", 25},
	{"h", 26},
	{"l", 27},
	{"ll", 28},
	{"j", 29},
	{"z", 30},
	{"t", 31},
	{"L", 32}
};
