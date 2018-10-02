# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 19:09:09 by ksonu             #+#    #+#              #
#    Updated: 2018/10/01 19:09:11 by ksonu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp
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
