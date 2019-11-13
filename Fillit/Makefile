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

NAME = fillit
FUNCTIONS = ft_sqrt.c\
			algorithm.c\
			list.c\
			main.c\
			map.c\
			validator.c

OBJECTS=$(FUNCTIONS:.c=.o)

FLAGS = -Wall -Wextra -Werror

LIBFT = libft/

CC = gcc

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): 	$(OBJECTS)
			make -C $(LIBFT)
			$(CC) $(FLAGS) $(OBJECTS) libft/libft.a -o $(NAME)

%.o: 		%.c -I.
			$(CC) -o $@ $(FLAGS) $<

clean:
			rm -f $(OBJECTS)
			make -C $(LIBFT) clean

fclean: 	clean
			rm -f $(NAME)
			make -C $(LIBFT) fclean

re: 		fclean all