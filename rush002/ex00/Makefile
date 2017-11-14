# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 13:42:53 by ralee             #+#    #+#              #
#    Updated: 2017/11/13 15:42:52 by jsoutelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RUSH_DIR = ./rush00/
CHECKER = -Wall -Wextra -Werror

all:
	gcc $(CHECKER) -o rush-00 $(RUSH_DIR)rush00.c $(RUSH_DIR)main.c $(RUSH_DIR)ft_putchar.c
	gcc $(CHECKER) -o rush-01 $(RUSH_DIR)rush01.c $(RUSH_DIR)main.c $(RUSH_DIR)ft_putchar.c
	gcc $(CHECKER) -o rush-02 $(RUSH_DIR)rush02.c $(RUSH_DIR)main.c $(RUSH_DIR)ft_putchar.c
	gcc $(CHECKER) -o rush-03 $(RUSH_DIR)rush03.c $(RUSH_DIR)main.c $(RUSH_DIR)ft_putchar.c
	gcc $(CHECKER) -o rush-04 $(RUSH_DIR)rush04.c $(RUSH_DIR)main.c $(RUSH_DIR)ft_putchar.c
	gcc $(CHECKER) -o rush-2 rush-2.c ft_create_elem.c ft_list_push_back.c ft_strcmp.c ./rush00_cmp/rush00.c ./rush00_cmp/rush01.c ./rush00_cmp/rush02.c ./rush00_cmp/rush03.c ./rush00_cmp/rush04.c

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f rush-00 rush-01 rush-02 rush-03 rush-04 rush-2

re: fclean all
