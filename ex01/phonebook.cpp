#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	next_index = 0;
	count = 0;
}

void PhoneBook::display_contact(int i)
{
	int count = get_count();
	if (i < count && i >= 0)
	{
		Contact disp = contact_arr[i];
		std::cout << "First name:	" << disp.get_first_name() << std::endl;
		std::cout << "Last name:	" << disp.get_last_name() << std::endl;
		std::cout << "Nickname:	" << disp.get_nickname() << std::endl;
		std::cout << "Phone number:	" << disp.get_phone_number() << std::endl;
		std::cout << "Darkest Secret:	" << disp.get_darkest_secret() << std::endl;
	}
}

static std::string truncate_10(const std::string &s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

void PhoneBook::display_table()
{
	int		i = 0;
	Contact	curr;

	std::cout << std::right
			<< std::setw(10) << "Index" << "|"
    		<< std::setw(10) << "First" << "|"
    		<< std::setw(10) << "Last" << "|"
    		<< std::setw(10) << "Nickname"
			<< std::endl;
	
	while (i < count)
	{
		curr = contact_arr[i];
		std::cout << std::right
				<< std::setw(10) << i << "|"
				<< std::setw(10) << truncate_10(curr.get_first_name()) << "|"
				<< std::setw(10) << truncate_10(curr.get_last_name()) << "|"
				<< std::setw(10) << truncate_10(curr.get_nickname())
				<< std::endl;
		i++; 
	}
}

void PhoneBook::add_contact()
{
	Contact new_entry;
	std::string input;

	while (new_entry.get_first_name().empty())
	{
		std::cout << "First Name: ";
		if(!std::getline(std::cin, input))
			return ;
		if(!input.empty())
			new_entry.set_first_name(input);
	}
	while (new_entry.get_last_name().empty())
	{
		std::cout << "Last Name: ";
		if(!std::getline(std::cin, input))
			return ;
		if(!input.empty())
			new_entry.set_last_name(input);
	}
	while (new_entry.get_nickname().empty())
	{
		std::cout << "Nickname: ";
		if(!std::getline(std::cin, input))
			return ;
		if(!input.empty())
			new_entry.set_nickname(input);
	}
	while (new_entry.get_phone_number().empty())
	{
		std::cout << "Phone Number: ";
		if(!std::getline(std::cin, input))
			return ;
		if(!input.empty())
			new_entry.set_phone_number(input);
	}
	while (new_entry.get_darkest_secret().empty())
	{
		std::cout << "Darkest Secret: ";
		if(!std::getline(std::cin, input))
			return ;
		if(!input.empty())
			new_entry.set_darkest_secret(input);
	}
	contact_arr[next_index] = new_entry;
	next_index = (next_index + 1) % 8;
	if (count < 8)
		count ++;
}
