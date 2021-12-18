SRC			= Warlock.cpp main.cpp
OBJ			= $(SRC:%.cpp=%.o)
DEP			= $(SRC:%.cpp=%.d)
NAME		= aa
CXXFLAGS	= -Wall -Wextra -Wpedantic -g -fsanitize=address

all		: $(NAME)

-include $(DEP)

%.o		: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -c $<
# $(@:%.o=%.cpp)

$(NAME)	: $(OBJ) Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean	:
	$(RM) $(OBJ)
	$(RM) $(DEP)

fclean	: clean
	$(RM) $(NAME)

# re		: fclean
# 	make

.PHONHY	: all clean fclean re
