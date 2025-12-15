/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:26:30 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/15 18:41:38 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
//empty Contact
Contact::Contact()
{
}
//Constructor
Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    // _first_name = fn;
    // _last_name = ln;
    // _nickname = nn;
    // _phone_number = pn;
    // _darkest_secret = ds;
    set_first_name(fn);
    set_last_name(ln);
    set_nickname(nn);
    set_phone_number(pn);
    set_darkest_secret(ds);
}
//SETTERS
void Contact::set_first_name(std::string fn)
{
    _first_name = fn;
}
void Contact::set_last_name(std::string ln)
{
    _last_name = ln;
}
void Contact::set_nickname(std::string nn)
{
    _nickname = nn;
}
void Contact::set_phone_number(std::string pn)
{
    _phone_number = pn;
}
void Contact::set_darkest_secret(std::string ds)
{
    _darkest_secret = ds;
}


//GETTERS
std::string Contact::get_first_name(void)
{
	return _first_name;
}

std::string Contact::get_last_name(void)
{
	return _last_name;
}

std::string Contact::get_nickname(void)
{
	return _nickname;
}

std::string Contact::get_phone_number(void)
{
	return _phone_number;
}

std::string Contact::get_darkest_secret(void)
{
	return _darkest_secret;
}
