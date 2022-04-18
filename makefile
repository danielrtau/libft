# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielro <danielro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 13:03:21 by danielro          #+#    #+#              #
#    Updated: 2022/04/18 14:05:11 by danielro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_strlcpy.c \
 ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strlen.c \
 ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
 ft_memcmp.c ft_strnstr.c ft_memmove.c ft_atoi.c ft_calloc.c ft_strdup.c

OBJECTS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar csr $(NAME) $(OBJECTS)

$(OBJECTS): $(SRCS)
	gcc $(CFLAGS) -c $(SRCS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
