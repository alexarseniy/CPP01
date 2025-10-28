# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 21:37:07 by olarseni          #+#    #+#              #
#    Updated: 2025/10/28 23:38:03 by olarseni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#									VARIABLES								   #
#==============================================================================#

# Program name
NAME	=	Hi_This_Is_Brain

# SRCS
VPATH	=	. srcs
SRCS	=	main.cpp

# OBJS
ODIR	=	objects
OBJS	=	$(SRCS:%.cpp=$(ODIR)/%.o)

# Compiler
CC		=	c++

# FLAGS
CFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98

#==============================================================================#
#								Rules										   #
#==============================================================================#
$(ODIR)/%.o: %.cpp | $(ODIR)
	@$(CC) $(CFLAGS) -o $@ -c $<
	@printf "\033[2K\rCompiling $@"

all: $(NAME)

$(NAME): $(OBJS)
	@printf "\033[2K\rCompiling $(NAME)\n"
	@$(CC) $(CFLAGS) -o $@ $^

$(ODIR):
	@mkdir -p $(ODIR)

clean:
	@rm -rf $(ODIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
