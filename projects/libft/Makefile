# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 18:19:16 by mmoras@stud       #+#    #+#              #
#    Updated: 2025/10/24 22:04:18 by mmoras@stud      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += -r
#Release
RE_RUN = ./
RE_CC = gcc
RE_CFLAGS = -Wall -Wextra -Werror
RE_COMPILE = $(RE_CC) $(RE_CFLAGS)
#Debugging
DB_RUN = lldb 
DB_CC = gcc
DB_CFLAGS = -g -fsanitize=undefined -gdwarf-4 
#-fstack-protector-strong -fsanitize=address -g3 -O0 
DB_COMPILE = $(DB_CC) $(DB_FLAGS)

RUN =
CC = 
CFLAGS = 
COMPILE =

HEADER = libft.h

SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

 
NAME = libft.a

ifeq ($(db),1)
	RUN = $(DB_RUN)
	CC = $(DB_CC)
    CFLAGS = $(RE_CFLAGS) $(DB_CFLAGS)
	COMPILE = $(CC) $(CFLAGS)
	
    BUILD_TYPE = Debug
else
	RUN = $(RE_RUN)
	CC = $(RE_CC)
    CFLAGS = $(RE_CFLAGS)
	COMPILE = $(CC) $(CFLAGS)

    BUILD_TYPE = Release
endif

all: $(NAME)

bonus : $(BONUS_OBJS) $(OBJS)
	@echo "Linking $? into $@"
	ar rsc $(NAME) $?

$(NAME): $(OBJS)
	ar rsc $@ $?

# %: %.o $(NAME)
# 	@echo "Linking $? into $@"
# 	@$(COMPILE) $^ -L. -lft -o $@

# Compile source to object
%.o: %.c
	@echo "Compiling $< into $@"
	@$(COMPILE) -c $< -o $@

clean: 
	rm -f $(wildcard *.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PRECIOUS: %.o
.PHONY: all clean fclean re bonus