# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebeiline <ebeiline@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 15:14:30 by ebeiline          #+#    #+#              #
#    Updated: 2021/09/13 12:35:36 by ebeiline         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c print_hex.c print_num_arr.c

FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): mlibft
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)
mlibft:
	cd libft && make && make bonus
clean:
	rm -f *.o
fclean: clean
	cd libft && make fclean
	rm -f $(NAME)
re: fclean all