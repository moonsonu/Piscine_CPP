# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/10 17:36:49 by ksonu             #+#    #+#              #
#    Updated: 2018/10/10 17:36:50 by ksonu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = array
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Array.hpp
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
