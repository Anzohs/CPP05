/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:21:18 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:54 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    std::srand(std::time(0));

    try
    {
        Intern      Nobody;
        Bureaucrat  Gugu("Gugu", 1);
        AForm*      A1;
        std::cout << std::endl;

        A1 = Nobody.makeForm("presidential request", "Target X");

        std::cout << std::endl << Gugu << std::endl;
        std::cout << *A1 << std::endl;
        Gugu.signForm(*A1);
        Gugu.executeForm(*A1);

        std::cout << std::endl;
        delete A1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Intern      Nobody;
        Bureaucrat  Gugu("Gugu", 1);
        AForm*      A1;
        std::cout << std::endl;

        A1 = Nobody.makeForm("robotomy request", "Target X");

        std::cout << std::endl << Gugu << std::endl;
        std::cout << *A1 << std::endl;
        Gugu.signForm(*A1);
        Gugu.executeForm(*A1);
        Gugu.executeForm(*A1);

        std::cout << std::endl;
        delete A1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Intern      Nobody;
        Bureaucrat  Gugu("Gugu", 1);
        AForm*      A1;
        std::cout << std::endl;

        A1 = Nobody.makeForm("shrubbery request", "Target X");

        std::cout << std::endl << Gugu << std::endl;
        std::cout << *A1 << std::endl;
        Gugu.signForm(*A1);
        Gugu.executeForm(*A1);

        std::cout << std::endl;
        delete A1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;
    
}