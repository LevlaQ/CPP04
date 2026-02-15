# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/06 15:10:58 by gyildiz           #+#    #+#              #
#    Updated: 2026/02/15 14:13:15 by gyildiz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
EXE_NAME = animals
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(EXE_NAME)

$(EXE_NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXE_NAME)

fclean: clean
	rm -rf $(EXE_NAME)

clean: 
	rm -rf $(OBJS)

re: fclean all

.PHONY: all fclean clean re