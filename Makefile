# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 10:52:00 by vgrankul          #+#    #+#              #
#    Updated: 2019/10/23 17:09:27 by vgrankul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY = libft.a
SRC = ./ft_putchar.c ./ft_putstr.c ./ft_strlen.c ./ft_strcpy.c ./ft_strcmp.c ./ft_strdup.c ./ft_strncmp.c ./ft_strncpy.c ./ft_strcat.c ./ft_strncat.c ./ft_putnbr.c ./ft_atoi.c ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c ./ft_strchr.c ./ft_strrchr.c ./ft_strstr.c ./ft_strnstr.c ./ft_memmove.c
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
