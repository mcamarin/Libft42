# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcamarinh@student.42sp.org.br <mcamarin    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/13 01:36:28 by mcamarinh@s       #+#    #+#              #
#    Updated: 2021/06/13 02:04:32 by mcamarinh@s      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror -std=c99
AR = ar rc
RM = rm -f

FT_FILES = ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove \
		ft_memchr ft_memcmp ft_strlen ft_strlcpy ft_strlcat \
		ft_strchr ft_strrchr ft_strnstr ft_strncmp ft_atoi \
		ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
		ft_toupper ft_tolower ft_calloc ft_strdup ft_substr \
		ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
		ft_putchar ft_putstr ft_strcat ft_strcpy ft_strcmp \
		ft_strstr ft_strncpy ft_strncat ft_strmalloc ft_putnbr \

RUN_DIR = ./
RUN = $(addprefix $(RUN_DIR), $(addsuffix .c, $(FT_FILES)))

RUN_DIR_O = ./
RUN_O = $(addprefix $(RUN_DIR_O), $(addsuffix .o, $(FT_FILES)))

.c.o: $(RUN)
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(RUN_O)
	$(AR) $@ $^

all: $(NAME)

clean: 
	$(RM) $(RUN_O)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re