# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoras@student.42heilbronn.de <mmoras>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 18:19:16 by mmoras@stud       #+#    #+#              #
#    Updated: 2025/10/15 23:49:12 by mmoras@stud      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += -r
CC = gcc
CFLAGS = 
COMPILE = $(CC) $(CFLAGS)

OBJDIR = obj
BINDIR = bin
HEADER = ../libft/libft.h

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
NAME = tester

all: $(NAME)

# Link object to executable
%: $(BINDIR)/%
	@echo "Runing $?:\n"
	@./$<

$(BINDIR)/%: $(OBJDIR)/%.o
	@echo "Linking $? into $@"
	@$(COMPILE) $^ $(HEADER) -o $@

# Compile source to object
$(OBJDIR)/%.o: %.c
	@echo "Compiling $? into $@"
	@$(COMPILE) -c $< -o $@

%.o: %.c
	$(COMPILE) -c $? -o $@ 
	
$(OBJDIR):
	mkdir -p $(OBJDIR)
	
$(BINDIR):
	mkdir -p $(BINDIR)


clean: 
	rm -f $(wildcard $(OBJDIR)/*.o)
	rm -f $(wildcard *.o)

fclean: clean
	rm -f $(wildcard $(BINDIR)/*)
	rm -f $(NAME)

re: fclean all

.PRECIOUS: $(OBJDIR)/%.o
.PRECIOUS: $(BINDIR)/%
.PHONY: all clean fclean re