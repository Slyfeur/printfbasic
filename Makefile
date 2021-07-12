# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuytters <tuytters@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 11:38:01 by tuytters          #+#    #+#              #
#    Updated: 2021/07/08 09:39:34 by tuytters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libftprintf.a

LIBFT	=		libft.a

CC 		=		gcc

DIR_LIBFT	=	./libft/
DIR_SRC		=	./
DIR_HEADERS =	./

CFLAGS	=		-Wall -Wextra -Werror

SRCS	=		ft_format.c				\
				ft_printf.c				\
				ft_putchar_print.c		\
				ft_puthexa_print.c		\
				ft_putnbr_print.c		\
				ft_putstr_print.c		\
				ft_tab.c

OUT		=		ft_printf.o

OBJS	=		$(SRCS:.c=.o)

MAIN	=		main.c

RM		=		rm -f

all		:		$(NAME)

$(NAME)	:		$(OBJS)
				@make -C $(DIR_LIBFT)
				@cp $(DIR_LIBFT)$(LIBFT) ./$(NAME)
				@ar rc $(NAME) $(OBJS)
				@$(RM) $(LIBFT)
				@ranlib $(NAME)

%.o: %.c
				@$(CC) $(CFLAGS) -c $< -o $@

test	:		fclean $(NAME)
					@$(CC) -o $(OUT) $(MAIN) $(NAME)

clean	:
				@$(RM) $(OBJS)
				@make clean -C ./libft/

fclean	:		clean
				@$(RM) $(NAME)
				@make fclean -C ./libft/

re		:		fclean all
.PHONY	:		all clean fclean re	test bonus