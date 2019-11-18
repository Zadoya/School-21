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

# change these to set the proper directories where each files shoould be
SRCDIR   = src
OBJDIR   = obj

SOURCES  := $(wildcard $(SRCDIR)/*.c)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

ODIR = objects

OBJECTS= $(patsubst %.c,$(ODIR)/%.o,$(FUNCTIONS))

FLAGS = -Wall -Wextra -Werror

LIBFT = libft/

CC = gcc

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): 	
			mkdir $(ODIR)
			$(OBJECTS)
			make -C $(LIBFT)
			$(CC) $(FLAGS) $(OBJECTS) libft/libft.a -o $(NAME)

$(OBJECTS):	$(ODIR)/%.o: %.c -I. | $(OBJDIR)
			$(CC) -o $@ $(FLAGS) $<

clean:
			rm -f $(OBJECTS)
			make -C $(LIBFT) clean

fclean: 	clean
			rm -f $(NAME)
			make -C $(LIBFT) fclean

re: 		fclean all