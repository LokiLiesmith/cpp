# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 18:21:06 by mrazem            #+#    #+#              #
#    Updated: 2025/12/15 18:44:46 by mrazem           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= tests.cpp Account.cpp
NAME	:= moneymakers
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