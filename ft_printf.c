/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 08:31:37 by tuytters          #+#    #+#             */
/*   Updated: 2021/07/12 15:29:22 by tuytters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_initialise_tab(t_struct *tab)
{
	tab->format = 0;
	tab->pourcent = 0;
	tab->s = 0;
	tab->di = 0;
	tab->u = 0;
	tab->x = 0;
	tab->X = 0;
	tab->p = 0;
	tab->c = 0;
	tab->pluspetit0 = 0;
}

int	ft_printf(const char *str, ...)
{
	va_list		list;
	t_struct	*tab;
	int			i;
	int			tl;
	char		*s;

	i = 0;
	tl = 0;
	s = (char *)str;
	va_start(list, str);
	tab = malloc(sizeof(t_struct));
	if (!tab)
		return (0);
	tab->tl = 0;
	ft_baseprint1(tab, list, s, i);
	va_end(list);
	tl = tab->tl;
	free(tab);
	return (tl);
}
