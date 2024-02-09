# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 07:58:20 by dimirzoe          #+#    #+#              #
#    Updated: 2023/12/05 06:25:50 by dimirzoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isdigit.c \
		ft_strtrim.c \
		ft_strjoin.c \
		ft_memset.c \
		ft_isprint.c\
		ft_putchar_fd.c \
		ft_strlcat.c \
		ft_substr.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_putendl_fd.c\
		ft_strlcpy.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_putnbr_fd.c \
		ft_strlen.c\
		ft_toupper.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_putstr_fd.c \
		ft_isalnum.c\
		ft_memcmp.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_strnstr.c \
		ft_isascii.c \
		ft_strdup.c \
		ft_strrchr.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_split.c \

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): ${OBJS}
		ar rcs  ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

bonus:	${OBJSBONUS}
		ar rcs ${NAME} ${OBJSBONUS}