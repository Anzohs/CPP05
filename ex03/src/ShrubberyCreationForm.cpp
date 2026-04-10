/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:21:56 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:54 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& str) : AForm("ShrubberyCreationForm", 25, 5)
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
	this->target = str;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm(obj)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		AForm::operator=(obj);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

const std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void ShrubberyCreationForm::execution_message() const
{
	std::ofstream file((this->getTarget() + "_shrubbery").c_str());
	if (!file)
	{
		std::cerr << "Error opening file." << std::endl;
		return;
	}

	file << "       /\\\n";
	file << "      /**\\\n";
	file << "     /****\\\n";
	file << "    /******\\\n";
	file << "       ||\n";
	file << "       ||\n";

	std::cout << this->getTarget() << "_shrubbery file created" << std::endl;
}