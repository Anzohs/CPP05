/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:45:33 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:45:33 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"

int main(void)
{
	std::cout << "-- Constructor checks --" << std::endl;
	try {
		Form badHigh("bad-high", 0, 10);
		(void)badHigh;
	} catch (const std::exception& e) {
		std::cout << "Form exception: " << e.what() << std::endl;
	}

	try {
		Form badLow("bad-low", 151, 10);
		(void)badLow;
	} catch (const std::exception& e) {
		std::cout << "Form exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- Signing checks --" << std::endl;
	Bureaucrat bob("Bob", 50);
	Form taxForm("TaxForm", 45, 30);
	Form leaveForm("LeaveForm", 70, 70);

	std::cout << bob << std::endl;
	std::cout << taxForm << std::endl;
	std::cout << leaveForm << std::endl;

	bob.signForm(taxForm);
	bob.signForm(leaveForm);

	std::cout << taxForm << std::endl;
	std::cout << leaveForm << std::endl;

	std::cout << std::endl << "-- Bureaucrat bounds checks --" << std::endl;
	Bureaucrat chief("Chief", 1);
	try {
		chief.incrementGrade();
	} catch (const std::exception& e) {
		std::cout << "Bureaucrat exception: " << e.what() << std::endl;
	}

	Bureaucrat intern("Intern", 150);
	try {
		intern.decrementGrade();
	} catch (const std::exception& e) {
		std::cout << "Bureaucrat exception: " << e.what() << std::endl;
	}

	return (0);
}