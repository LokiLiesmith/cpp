CXX		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= phonebook.cpp
NAME	:= phonebook
OBJDIR	:= obj
OBJ		:= $(SRC:%.c=$(OBJDIR)/%.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@$(CC) $C(FLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Clean rules
clean:
	rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all
.PHONY: all clean fclean re