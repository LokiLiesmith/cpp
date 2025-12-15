#include "phonebook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, command))
			break;

		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
		{
			std::string input_idx;
			phonebook.display_table();
			while(!phonebook.valid_input(input_idx))
			{
				std::cout << "Display index: " << std::endl;
				if (!std::getline(std::cin, input_idx))
					return (1);
			}
			int t = std::atoi(input_idx.c_str());
			phonebook.display_contact(t);
		}
		else if (command == "EXIT")
			break;
	}
	return (0);
}
