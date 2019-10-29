# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 10:52:00 by vgrankul          #+#    #+#              #
#    Updated: 2019/10/29 15:31:48 by vgrankul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY = libft.a
SRC = ./ft_putchar.c ./ft_putstr.c ./ft_strlen.c ./ft_strcpy.c ./ft_strcmp.c ./ft_strdup.c ./ft_strncmp.c ./ft_strncpy.c ./ft_strcat.c ./ft_strncat.c ./ft_putnbr.c ./ft_atoi.c ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c ./ft_strchr.c ./ft_strrchr.c ./ft_strstr.c ./ft_strnstr.c ./ft_memmove.c ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_toupper.c ./ft_tolower.c ./ft_strlcat.c ./ft_strclr.c ./ft_striter.c ./ft_putendl.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putstr_fd.c ./ft_putnbr_fd.c ./ft_striteri.c ./ft_strequ.c ./ft_strnequ.c ./ft_strmap.c ./ft_strmapi.c ./ft_memalloc.c ./ft_memdel.c ./ft_strnew.c
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
