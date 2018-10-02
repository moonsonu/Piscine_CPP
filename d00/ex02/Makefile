# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 11:38:56 by ksonu             #+#    #+#              #
#    Updated: 2018/10/02 11:51:15 by ksonu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
SRCS = Account.class.cpp	\
	   tests.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Account.class.hpp
CXX = clang++
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS) $(HDRS)
	$(CXX) $(OBJS) -o $@

%.o: %.c %.hpp
	$(CXX) $(FLAGS) -o $@ -c $<

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
