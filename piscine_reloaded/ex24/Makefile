# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pspuhler <pspuhler@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/08 17:41:15 by pspuhler          #+#    #+#              #
#    Updated: 2026/09/08 17:56:14 by pspuhler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define filename
NAME = libft.a

# Define Standard-C-Compiler
CC = cc

# Activate the mandatory Flags for compiling
CFLAGS = -Wall -Werror -Wextra

# Find the library with 'includes'
INCLUDES = includes

# List the functions
SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

# Set the path to srcs/ -> important for structure
SRCS = $(addprefix srcs/, $(SRC_FILES))

# Copy the .c-files and transform the copy to .o-files (object-files)
OBJS = $(SRCS:.c=.o)

# Target everything if you command 'make'
all: $(NAME)

# Create a own library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Where make can find the .c & .o files -> in srcs/
srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

# Delete die .o-files (object-files)
clean:
	rm -f $(OBJS)

# Deletes also libft.a (everything new created with make)
fclean: clean
	rm -f $(NAME)

# Rebuild: 1. fclean, 2. make -> ready to start again
re: fclean all

# Prevents failures with file names with commands in this file
.PHONY: all clean fclean re
