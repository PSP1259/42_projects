# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/11 11:54:56 by pspuhler          #+#    #+#              #
#    Updated: 2026/09/11 13:03:07 by pspuhler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define filename !(no .a) -> binary-file
NAME = ft_display_file

# Define Standard-C-Compiler
CC = cc

# Activate the mandatory Flags for compiling
CFLAGS = -Wall -Werror -Wextra

# List the functions
SRC_FILES = ft_display_file.c

# .c-Files are directly converted into .o-Files -> binary-file
OBJS = $(SRC_FILES:.c=.o)

# Target everything if you command 'make'
all: $(NAME)

# Create a own library
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Where make can find the .c file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Delete die .o-files (object-files)
clean:
	rm -f $(OBJS)

# Deletes everything new created with make
fclean: clean
	rm -f $(NAME)

# Rebuild: 1. fclean, 2. make -> ready to start again
re: fclean all

# Prevents failures with file names with commands in this file
.PHONY: all clean fclean re
