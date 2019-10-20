# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 10:52:00 by vgrankul          #+#    #+#              #
#    Updated: 2019/10/20 16:37:20 by vgrankul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY = libft.a
SRC = ./ft_putchar.c ./ft_putstr.c ./ft_strlen.c ./ft_strcpy.c ./ft_strcmp.c ./ft_strdup.c ./ft_strncmp.c ./ft_strncpy.c
OBJECTS = $(SRC:%.c=%.o)
INC = ./libft.h

all: $(LIBRARY)

create_o:
	gcc -c -Wextra -Werror -Wall  $(SRC) -I $(INC)

$(LIBRARY): create_o
	ar rc $(LIBRARY) $(OBJECTS)
	ranlib $(LIBRARY)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all
