CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INFILES = 	Account.cpp tests.cpp

OBJFILES = $(INFILES:.cpp=.o)

NAME = Account

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re