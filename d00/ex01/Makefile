# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 19:41:41 by ksonu             #+#    #+#              #
#    Updated: 2018/10/02 12:04:15 by ksonu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = main.cpp	\
		addcontact.cpp	\
		search.cpp
HDRS = contact.class.hpp
OBJS = $(SRCS:.cpp=.o)

CXX = clang++
FLASG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CXX) $(OBJS) -o $@

%.o: %.c %.hpp
	$(CXX) $(FLAGS) -o $@ -c $<

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
