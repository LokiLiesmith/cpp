#include "phonebook.hpp"

int main(int ac, char **av)
{
    Contact c1("mark", "razem", "asd", "123123", "youwish");

    if (ac != 2)
        return(std::cout << "no bueno" << std::endl, 1);
    std::string input = av[1];
    if (input == "ADD")
        std::cout << "ADD-BRANCH" << std::endl;
    else if (input == "SEARCH")
        std::cout << "SEARCH - Branch" << std::endl;
    else if (input == "EXIT")
        std::cout << "EXIT - Branch" << std::endl;

    std::cout << c1.get_first_name() << std::endl;
    return (0);
}