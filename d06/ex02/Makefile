# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/09 13:08:15 by ksonu             #+#    #+#              #
#    Updated: 2018/10/09 13:08:17 by ksonu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = realtype
SRCS = A.cpp	\
	   B.cpp	\
	   C.cpp	\
	   Base.cpp	\
	   main.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = A.hpp	\
	   B.hpp	\
	   C.hpp	\
	   Base.hpp
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
