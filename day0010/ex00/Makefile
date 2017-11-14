# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 11:38:10 by jsoutelo          #+#    #+#              #
#    Updated: 2017/11/09 17:10:15 by jsoutelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
S = srcs/ft_
O = ft_
SRC = $(S)putchar.c $(S)putstr.c $(S)strcmp.c $(S)strlen.c $(S)swap.c
OBJS = $(O)putchar.o $(O)putstr.o $(O)strcmp.o $(O)strlen.o $(O)swap.o
HEADER = ./includes/


all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJS) 
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS) 

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
