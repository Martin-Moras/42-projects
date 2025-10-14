MAKEFLAGS += -r
CC = gcc
CFLAGS = -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS)

OBJDIR = obj
BINDIR = bin

all:
	@echo "Usage: make <program>"

# Link object to executable
%: $(BINDIR)/%
	@echo "Runing $?:\n"
	@./$<

$(BINDIR)/%: $(OBJDIR)/%.o
	@echo "Linking $? into $@"
	@$(COMPILE) $^ -o $@

# Compile source to object
$(OBJDIR)/%.o: %.c
	@echo "Compiling $? into $@"
	@$(COMPILE) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(BINDIR):
	mkdir -p $(BINDIR)

clean: 
	rm -f $(wildcard $(OBJDIR)/*.o)

fclean: clean
	rm -f $(wildcard $(BINDIR)/*)

.PRECIOUS: $(OBJDIR)/%.o
.PRECIOUS: $(BINDIR)/%