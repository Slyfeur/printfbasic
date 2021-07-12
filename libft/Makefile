# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 09:45:55 by tuytters          #+#    #+#              #
#    Updated: 2021/07/12 14:44:34 by tuytters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c		\
			ft_isdigit.c	\
			ft_itoa.c		\
			ft_len.c		\
			ft_strdup.c		\
			ft_strlen.c		\
			ft_substr.c		

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a
LIB		=	libft.h

CLEAN	=	clean

all	:		$(NAME)

$(NAME)	:	$(OBJS)
			@$(CC) -c -I$(LIB) $(CFLAGS) $(SRCS)
			@ar rc $(NAME) $(OBJS)
			@ranlib $(NAME)

%.o: %.c
			@$(CC) $(CFLAGS) -c $< -o $@

clean	:
			@$(RM) $(OBJS)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all
.PHONY	:	all clean fclean re	test bonus