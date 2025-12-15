#include "phonebook.hpp"
//empty Contact
Contact::Contact()
{

}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    // first_name = fn;
    // last_name = ln;
    // nickname = nn;
    // phone_number = pn;
    // darkest_secret = ds;
    set_first_name(fn);
    set_last_name(ln);
    set_nickname(nn);
    set_phone_number(pn);
    set_darkest_secret(ds);
}

void Contact::set_first_name(std::string fn)
{
    first_name = fn;
}
void Contact::set_last_name(std::string ln)
{
    last_name = ln;
}
void Contact::set_nickname(std::string nn)
{
    nickname = nn;
}
void Contact::set_phone_number(std::string pn)
{
    phone_number = pn;
}
void Contact::set_darkest_secret(std::string ds)
{
    darkest_secret = ds;
}