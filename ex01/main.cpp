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
			while(input_idx.empty())
			{
				if (!std::getline(std::cin, input_idx))
					return ;
				if (!input_idx.empty())
					phonebook.display_contact(input_idx);
			}

		}
		else if (command == "EXIT")
			break;

		std::cout << "back in main\n";
	}
	phonebook.display_contact(0);
	// std::cout << c1.get_first_name() << std::endl;
	return (0);
}