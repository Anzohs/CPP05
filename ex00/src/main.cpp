/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:24:23 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:45 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat Eusebio("Eusebio", 0);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;

    try
    {
        Bureaucrat Sebastiao("Sebastiao", 151);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;

    try
    {
        Bureaucrat Gustavo("Gustavo", 1);
        std::cout << Gustavo << std::endl;
        Gustavo.incrementGrade();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;

    try
    {
        Bureaucrat Chico("Chico", 150);
        std::cout << Chico << std::endl;
        Chico.decrementGrade();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "-------------" << std::endl;
    
    Bureaucrat Kaio("Kaio", 150);

    try
    {
        Kaio.decrementGrade();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << Kaio << std::endl;
    
    std::cout << "-------------" << std::endl;

    Bureaucrat Abacaxi("Abacaxi", 50);
    Bureaucrat Banana(Abacaxi);

    std::cout << Banana << std::endl;

    std::cout << "-------------" << std::endl;

    Bureaucrat Carne("Carne", 50);
    Bureaucrat Peixe("Peixe", 100);
    Peixe = Carne;

    std::cout << Peixe << std::endl;

    std::cout << "-------------" << std::endl;
}
