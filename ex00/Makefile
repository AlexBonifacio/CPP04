
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP -Iinc

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp \
		WrongAnimal.cpp WrongCat.cpp

OBJDIR = obj

OBJS = $(patsubst %.cpp,$(OBJDIR)/%.o,$(SRCS))
DEP = $(OBJS:.o=.d)

NAME = ex00.out

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR) : 
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o : %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

-include $(DEP)

.PHONY : all clean fclean re