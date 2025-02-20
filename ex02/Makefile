# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 11:43:08 by amirfatt          #+#    #+#              #
#    Updated: 2025/01/17 15:26:54 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
#-pedantic

SOURCE = main.cpp 

OBJECT = $(SOURCE:.cpp=.o) 

.PHONY : all re clean fclean

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all
