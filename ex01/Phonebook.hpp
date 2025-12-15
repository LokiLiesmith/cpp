/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:28:20 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/15 18:40:11 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Contact
{
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	public:
		Contact();
		Contact(std::string, std::string, std::string, std::string, std::string);
		//setters
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_phone_number(std::string phone_number);
		void set_darkest_secret(std::string darkest_secret);
		//getters
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
		// std::string get_first_name(){return first_name;}
		// std::string get_last_name(){return last_name;}
		// std::string get_nickname(){return nickname;}
		// std::string get_phone_number(){return phone_number;}
		// std::string get_darkest_secret(){return darkest_secret;}
};

class PhoneBook
{
	Contact contact_arr[8];
	int     next_index;
	int     count;
	
	public:
		PhoneBook();
		void	add_contact();
		void	display_table();
		void	display_contact(int i);
		int		get_count(){return count;}
		int		valid_input(std::string input_idx);

};

#endif