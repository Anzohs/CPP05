/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:21:52 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:54 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& str) : AForm("PresidentialPardonForm", 145, 137)
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
	this->target = str;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		AForm::operator=(obj);
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

const std::string	PresidentialPardonForm::getTarget() const 
{
	return (this->target);
}

void				PresidentialPardonForm::execution_message() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
