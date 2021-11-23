# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aweaver <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 10:40:46 by aweaver           #+#    #+#              #
#    Updated: 2021/11/23 11:42:58 by aweaver          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\

#unsure about the following	
#should I add a _bonus before all the names?
BONUS	=	ft_lstnew.c
			ft_lstadd_front.c
			ft_lstsize.c
			ft_lstlast.c
			ft_lstadd_back.c
			ft_lstdelone.c
			ft_lstclear.c
			ft_lstiter.c
			ft_lstmap.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	+=	-Wall -Wextra -Werror

LIBFLAG +=	-rcs
#I might need to add a lib rule with -ar
all		=	
			@make $(NAME)

$(NAME) =	$(OBJS) #should I add a lib rule here?
			$(CC) $(CFLAGS) #if so should I add a $(LIB) ?

clean 	=	
			rm -f $(OBJS)

fclean	=	clean
			rm -f $(NAME)

re		=	fclean all
