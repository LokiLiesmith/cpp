/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:26:12 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/15 18:26:15 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 1;
        while (i < ac)
        {
            size_t j = 0;
            std::string str = av[i];
            while (j < str.length())
                std::cout << (char)toupper(str[j++]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
