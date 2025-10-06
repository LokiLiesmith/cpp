#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    else
    {
        int i = 0;
        while (i + 1 < ac)
        {
            std::string str = av[i + 1];
            size_t j = 0;
            while (j < str.length())
                std::cout << (char)std::toupper(str[j++]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}