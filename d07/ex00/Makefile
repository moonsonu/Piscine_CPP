# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/10 17:34:15 by ksonu             #+#    #+#              #
#    Updated: 2018/10/10 17:34:17 by ksonu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
SRCS = whatever.cpp
CXX = clang++
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.c
	$(CXX) $(FLAGS) -o $@ -c $<
clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
