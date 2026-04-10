/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:46 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:51 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::srand(std::time(0));

    std::cout << "-------------- PresidentialPardonForm ---------------\n\n";

    try
    {
        Bureaucrat Gugu("Gugu", 150);
        PresidentialPardonForm A1("Target X");
        std::cout << std::endl;

        std::cout << Gugu << std::endl;
        std::cout << A1 << std::endl;
        Gugu.signForm(A1);
        Gugu.executeForm(A1);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 144);
        PresidentialPardonForm A1("Target X");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A1 << std::endl;
        Gugu.signForm(A1);
        Gugu.executeForm(A1);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 136);
        PresidentialPardonForm A1("Target X");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A1 << std::endl;
        Gugu.executeForm(A1);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 136);
        PresidentialPardonForm A1("Target X");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A1 << std::endl;
        Gugu.signForm(A1);
        Gugu.executeForm(A1);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "\n-------------- RobotomyRequestForm ---------------\n\n";

    try
    {
        Bureaucrat Gugu("Gugu", 75);
        RobotomyRequestForm A2("Target Y");
        std::cout << std::endl;

        std::cout << Gugu << std::endl;
        std::cout << A2 << std::endl;
        Gugu.signForm(A2);
        Gugu.executeForm(A2);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 70);
        RobotomyRequestForm A2("Target Y");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A2 << std::endl;
        Gugu.signForm(A2);
        Gugu.executeForm(A2);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 45);
        RobotomyRequestForm A1("Target X");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A1 << std::endl;
        Gugu.executeForm(A1);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 45);
        RobotomyRequestForm A2("Target Y");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A2 << std::endl;
        Gugu.signForm(A2);
        Gugu.executeForm(A2);
        Gugu.executeForm(A2);
        Gugu.executeForm(A2);
        Gugu.executeForm(A2);
        Gugu.executeForm(A2);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n-------------- ShrubberyCreationForm ---------------\n\n";

    try
    {
        Bureaucrat Gugu("Gugu", 30);
        ShrubberyCreationForm A3("file_1");
        std::cout << std::endl;

        std::cout << Gugu << std::endl;
        std::cout << A3 << std::endl;
        Gugu.signForm(A3);
        Gugu.executeForm(A3);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 10);
        ShrubberyCreationForm A3("file_2");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A3 << std::endl;
        Gugu.signForm(A3);
        Gugu.executeForm(A3);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 5);
        ShrubberyCreationForm A1("file_3");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A1 << std::endl;
        Gugu.executeForm(A1);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "----------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Gugu("Gugu", 5);
        ShrubberyCreationForm A3("file_4");
        std::cout << std::endl;
        
        std::cout << Gugu << std::endl;
        std::cout << A3 << std::endl;
        Gugu.signForm(A3);
        Gugu.executeForm(A3);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "----------------------------------------------" << std::endl;

    
}
