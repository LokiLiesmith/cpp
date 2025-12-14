CXX		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= phonebook.cpp Contact.cpp
NAME	:= phonebook
OBJDIR	:= obj
OBJ		:= $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Clean rules
clean:
	rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all
.PHONY: all clean fclean re