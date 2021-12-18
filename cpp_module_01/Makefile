SRC			= Warlock.cpp ASpell.cpp ATarget.cpp main.cpp
OBJ			= $(SRC:%.cpp=%.o)
DEP			= $(SRC:%.cpp=%.d)
NAME		= aa
CXXFLAGS	= -Wall -Wextra -Wpedantic -g -fsanitize=address

all		: $(NAME)

-include $(DEP)

%.o		: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -MMD -c $<

$(NAME)	: $(OBJ) Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean	:
	$(RM) $(DEP)
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re		: fclean
	make

.PHONHY	: all clean fclean re
