# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 19:51:35 by plopes-c          #+#    #+#              #
#    Updated: 2023/05/11 01:28:54 by plopes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_isprint.c	ft_isalnum.c	ft_memcmp.c		ft_substr.c		ft_strjoin.c	\
					ft_strlcat.c	ft_strncmp.c	ft_atoi.c		ft_isalpha.c	ft_strtrim.c	\
					ft_memcpy.c		ft_strchr.c		ft_strlcpy.c	ft_calloc.c		ft_split.c		\
					ft_strnstr.c	ft_tolower.c	ft_bzero.c		ft_isascii.c 	ft_itoa.c		\
					ft_memmove.c	ft_strlen.c		ft_strrchr.c	ft_strdup.c		ft_strmapi.c	\
					ft_toupper.c	ft_isdigit.c	ft_memchr.c		ft_memset.c		ft_striteri.c	\
					ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	ft_printf/ft_printf.c		\
					ft_printf/ft_printf_utils.c get_next_line/get_next_line_bonus.c	get_next_line/get_next_line_utils_bonus.c \

BONUS			=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	ft_lstadd_back.c	ft_lstlast.c \
					ft_lstdelone.c	ft_lstclear.c		ft_lstiter.c	ft_lstmap.c
	
OBJS			= $(SRCS:.c=.o)

BONUS_OBJS		= $(BONUS:.c=.o)

INCLUDES		= -I libft_includes

RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror $(INCLUDES)

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

bonus:		 	$(BONUS_OBJS) $(OBJS)
				@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)