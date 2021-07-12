/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 09:40:49 by tuytters          #+#    #+#             */
/*   Updated: 2021/06/25 10:03:27 by tuytters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <stddef.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

long long	ft_atoi(const char *nptr);
int			ft_isdigit(int c);
char		*ft_itoa(long long n);
int			ft_numlen(long long n);
int			ft_strlenprint(char *s);
int			ft_strlenhexa(unsigned long long n);
char		*ft_strdup(const char *src);
size_t		ft_strlen(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif