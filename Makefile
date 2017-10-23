# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/07 14:02:53 by tmwalo            #+#    #+#              #
#    Updated: 2017/07/07 14:20:27 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC = ft_ls.c

OBJ = ft_ls.o

ONAME = ft_ls.o

DEPS = ft_ls.h

FLAGS = -Wall -Wextra -Werror

all: $(DEPS) $(NAME)

$(NAME):
	gcc -o $(ONAME) -c $(SRC) $(FLAGS)
	gcc -o $(NAME) $(OBJ) $(FLAGS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
