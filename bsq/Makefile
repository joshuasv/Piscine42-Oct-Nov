# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 15:34:53 by jsoutelo          #+#    #+#              #
#    Updated: 2017/11/16 13:36:31 by jsoutelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR = ./files/
FLAGS = -Wall -Werror -Wextra 
TEST = perl map_gen.pl 1000 1000 9 | ./a.out
all:
	@gcc $(FLAGS) main.c	ft_list_push_back.c ft_create_elem.c ft_list_size.c pre_functions.c ft_atoi.c al_functions.c

clean:
	@/bin/rm -f *.o

fclean:
	@/bin/rm -f a.out

test:
	@$(TEST)
re: fclean all
