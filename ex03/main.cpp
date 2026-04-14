/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:47:56 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:47:56 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Intern.h"
#include "AForm.h"

#include <cstdlib>
#include <ctime>

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Intern someRandomIntern;
	AForm* shrubbery = someRandomIntern.makeForm("shrubbery creation", "home");
	AForm* robotomy = someRandomIntern.makeForm("robotomy request", "Bender");
	AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
	AForm* invalid = someRandomIntern.makeForm("coffee making", "office");

	Bureaucrat boss("Boss", 1);

	if (shrubbery)
	{
		boss.signForm(*shrubbery);
		boss.executeForm(*shrubbery);
		std::cout << *shrubbery << std::endl;
		delete shrubbery;
	}

	if (robotomy)
	{
		boss.signForm(*robotomy);
		boss.executeForm(*robotomy);
		std::cout << *robotomy << std::endl;
		delete robotomy;
	}

	if (pardon)
	{
		boss.signForm(*pardon);
		boss.executeForm(*pardon);
		std::cout << *pardon << std::endl;
		delete pardon;
	}

	if (invalid)
		delete invalid;

	return (0);
}