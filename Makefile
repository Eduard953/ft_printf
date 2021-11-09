# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduardbeiline <eduardbeiline@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 15:14:30 by ebeiline          #+#    #+#              #
#    Updated: 2021/11/09 14:30:33 by eduardbeili      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c print_hex.c print_num_arr.c print_p.c

FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): 
	make -C ./libft
	cp libft/libft.a $(NAME)
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	cd libft && make fclean
	rm -f $(NAME)
re: fclean all