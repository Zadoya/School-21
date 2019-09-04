# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 11:03:16 by jeckhard          #+#    #+#              #
#    Updated: 2019/09/05 11:15:49 by jeckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FUNCTIONS = *.c
FLAGS = -Wall -Wextra -Werror -I -c

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(FUNCTIONS)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all