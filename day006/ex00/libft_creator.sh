# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/01 15:14:05 by jsoutelo          #+#    #+#              #
#    Updated: 2017/11/02 17:27:28 by jsoutelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c	ft_strcmp.c	ft_swap.c ft_putstr.c ft_strlen.c 
ar rc libft.a ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
