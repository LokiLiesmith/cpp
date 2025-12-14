#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <string>

// class PhoneBook
// {
//     private:

//     public:
// };

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;



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
        std::string get_first_name(){return first_name;}
        std::string get_last_name(){return last_name;}
        std::string get_nickname(){return nickname;}
        std::string get_phone_number(){return phone_number;}
        std::string get_darkest_secret(){return darkest_secret;}
};

#endif