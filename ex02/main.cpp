/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:46:40 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:46:40 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

#include <cstdlib>

int main(void)
{
	std::srand(1);

	std::cout << "-- Constructor checks --" << std::endl;
	try {
		Bureaucrat badHigh("bad-high", 0);
		(void)badHigh;
	} catch (const std::exception& e) {
		std::cout << "Bureaucrat exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- Sign and execute checks --" << std::endl;
	Bureaucrat high("High", 1);
	Bureaucrat mid("Mid", 50);
	Bureaucrat low("Low", 150);

	ShrubberyCreationForm shrub("garden");
	RobotomyRequestForm robot("Bender");
	PresidentialPardonForm pardon("Arthur Dent");

	std::cout << high << std::endl;
	std::cout << shrub << std::endl;
	std::cout << robot << std::endl;
	std::cout << pardon << std::endl;

	low.executeForm(pardon);
	low.signForm(shrub);
	high.signForm(shrub);
	mid.signForm(robot);
	high.signForm(robot);
	high.signForm(pardon);

	low.executeForm(shrub);
	high.executeForm(shrub);
	mid.executeForm(robot);
	high.executeForm(robot);
	mid.executeForm(pardon);
	high.executeForm(pardon);

	std::cout << std::endl << "-- Final states --" << std::endl;
	std::cout << shrub << std::endl;
	std::cout << robot << std::endl;
	std::cout << pardon << std::endl;

	return (0);
}