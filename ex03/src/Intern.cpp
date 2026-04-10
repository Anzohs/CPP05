/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:21:26 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:55 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(const Intern& newObj)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = newObj;
}

Intern& Intern::operator=(const Intern& newObj)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	if (this != &newObj)
		*this = newObj;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

const char* Intern::InexistentForm::what() const throw()
{
    return "Form does not exist";
}

const char* Intern::InexistentTarget::what() const throw()
{
    return "Target does not exist";
}

AForm*		Intern::makeForm(const std::string request, const std::string target)
{
	std::string forms[3] = {"presidential request", "robotomy request","shrubbery request"};
	int i = 0;

	while (i < 3 && forms[i] != request)
        i++;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates Presidential Form" << std::endl;
			return new PresidentialPardonForm(target);
		
		case 1:
			std::cout << "Intern creates Robotomy Form" << std::endl;
			return new RobotomyRequestForm(target);

		case 2:
			std::cout << "Intern creates Shrubbery Form" << std::endl;
			return new ShrubberyCreationForm(target);

		default:
			throw InexistentForm();
	}
}
