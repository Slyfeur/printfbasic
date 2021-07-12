/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:02:05 by tuytters          #+#    #+#             */
/*   Updated: 2021/07/08 13:24:06 by tuytters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_struct
{
	int					format;
	int					pourcent;
	int					pluspetit0;
	int					tl;
	long				di;
	unsigned int		x;
	unsigned int		X;
	unsigned long long	p;
	long long			u;
	char				c;
	char				*s;
}	t_struct;

void	ft_baseprint1(t_struct *tab, va_list list, char *str, int i);
void	ft_baseprint2(t_struct *tab);
void	ft_change(t_struct *tab);
int		ft_formatnum(va_list list, t_struct *tab, char *str, int i);
int		ft_formatuchar(va_list list, t_struct *tab, char *str, int i);
void	ft_initialise_tab(t_struct *tab);
void	ft_nbr(t_struct *tab, int n, char str);
int		ft_printf(const char *format, ...);
void	ft_putchar_print(t_struct *tab, char c);
void	ft_puthexa_print(t_struct *tab, unsigned long n);
void	ft_putheXa_print(t_struct *tab, unsigned long n);
void	ft_puthexapoint_print(t_struct *tab, unsigned long long n);
void	ft_putnbr_print(t_struct *tab, int n);
void	ft_putstr_print(t_struct *tab, char *s);
void	ft_putu_print(t_struct *tab);
int		ft_tab(va_list list, t_struct *tab, char *str, int i);
char	*ft_writehexa(t_struct *tab, int i, unsigned long long nbr, char *str);
void	ft_writemoins(t_struct *tab);

#endif
