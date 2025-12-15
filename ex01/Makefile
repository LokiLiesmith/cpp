# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 18:28:05 by mrazem            #+#    #+#              #
#    Updated: 2025/12/15 18:39:24 by mrazem           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= main.cpp Phonebook.cpp Contact.cpp
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