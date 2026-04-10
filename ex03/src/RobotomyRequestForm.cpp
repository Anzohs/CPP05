/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:21:54 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:54 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& str) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
	this->target = str;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		AForm::operator=(obj);
	}
	return *this;
}

const std::string	RobotomyRequestForm::getTarget() const 
{
	return (this->target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void		RobotomyRequestForm::execution_message() const
{
	std::cout << "Vrr-vrr Zzzzt Zzzt-zzzt vrr-vrrrrrrrrr Zzzt-zzzt" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " as been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy on " << this->getTarget() << " failed." << std::endl;
}
