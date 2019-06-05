# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nselaule <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 09:44:43 by nselaule          #+#    #+#              #
#    Updated: 2018/08/09 13:49:11 by nselaule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef LIBFT.H
#define LIBFT.H

NAME = megaphone

FLAGS = -Wall -Wextra -Werror
SRC =	megaphone.cpp

OBJ =	$(SRC:.c=.o)
	
all: $(NAME)
$(NAME):
	@clang++ -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	rm  -f $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
