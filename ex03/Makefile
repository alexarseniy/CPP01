# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 21:37:07 by olarseni          #+#    #+#              #
#    Updated: 2025/10/28 23:48:24 by olarseni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#									VARIABLES								   #
#==============================================================================#

# Program name
NAME	=	Moar_Brainz

# SRCS
VPATH	=	srcs
SRCS	=	main.cpp		\
			Weapon.cpp		\
			HumanA.cpp		\
			HumanB.cpp

# OBJS
ODIR	=	objects
OBJS	=	$(SRCS:%.cpp=$(ODIR)/%.o)

# Includes
IDIR	=	includes

# Compiler
CC		=	c++

# FLAGS
CFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98
IFLAGS	=	-I$(IDIR)

#==============================================================================#
#								Rules										   #
#==============================================================================#
$(ODIR)/%.o: %.cpp | $(ODIR)
	@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<
	@printf "\033[2K\rCompiling $@"

all: $(NAME)

$(NAME): $(OBJS)
	@printf "\033[2K\rCompiling $(NAME)\n"
	@$(CC) $(CFLAGS) $(IFLAGS) -o $@ $^

$(ODIR):
	@mkdir -p $(ODIR)

clean:
	@rm -rf $(ODIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
