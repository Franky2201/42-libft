# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-win <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 13:05:02 by gde-win           #+#    #+#              #
#    Updated: 2023/10/10 12:39:06 by gde-win          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CC := cc

CFLAGS := -Wall -Wextra -Werror -I.

FUNCTIONS := ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_printf/ft_printf.c \
			ft_printf/ft_putchar.c \
			ft_printf/ft_putnbr.c \
			ft_printf/ft_putstr.c \
			ft_printf/ft_strlen.c \
			get_next_line/get_next_line.c \
			get_next_line/get_next_line_utils.c


SRCS := $(FUNCTIONS)

# obsolete \
SRCS_BONUS := $(FUNCTIONS_BONUS)

OBJS := $(SRCS:.c=.o)

# obsolete \
OBJS_BONUS := $(SRCS_BONUS:.c=.o)

INCLUDE := libft.h \
		ft_printf/ft_printf.h \
		get_next_line/get_next_line.h

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	ar -rc $@ $^

clean:
	rm -rf $(OBJS) # obsolete $(OBJS_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# obsolete \
bonus: $(NAME) $(OBJS_BONUS) \
	ar -rc $^

.PHONY: all clean fclean re # obsolete bonus
