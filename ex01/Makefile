CXX=c++
CXXFLAGS=-Wall -Werror -Wextra -g -std=c++98
DEPS=
SRCS=main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS=$(SRCS:.cpp=.o)
NAME=animals
all: $(NAME)
$(NAME): $(OBJS) $(DEPS)
	@$(CXX) $(OBJS) $(DEPS) -o $(NAME)
clean:
	@rm $(OBJS)
fclean: clean
	@rm $(NAME)
re: fclean all