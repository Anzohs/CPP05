/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:35 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:50 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& str, const int grade, const int exec) 
			: name(str), sign_grade(grade), exec_grade(exec)
{
	std::cout << "Default AForm constructor called" << std::endl;
	is_signed = false;
	checkGrade();
}

AForm::AForm(const AForm& obj) : name(obj.name), sign_grade(obj.sign_grade), exec_grade(obj.exec_grade)
{
	std::cout << "AForm copy constructor called" << std::endl;
	this->is_signed = obj.is_signed;
}

AForm& AForm::operator=(const AForm& obj)
{
	std::cout << "AForm copy assignment operator called" << std::endl;
	if (this != &obj)
		this->is_signed = obj.is_signed;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

const std::string&	AForm::getName() const
{
	return this->name;
}

bool			AForm::getBool() const
{
	return this->is_signed;
}

int			AForm::getGrade() const
{
	return this->sign_grade;
}

int			AForm::getExecGrade() const
{
	return this->exec_grade;
}

void				AForm::setBool()
{
	this->is_signed = true;
}

void			AForm::beSigned(const Bureaucrat& obj)
{
	if (this->getBool() == true)
	{
		throw FormAlreadySigned();
	}
	else if (obj.getGrade() > this->getGrade())
	{
		throw BureaucratGradeTooLowException();
	}
	setBool();
}

void	AForm::checkGrade()
{
	if (sign_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150)
    	throw GradeTooLowException();
	if (exec_grade < 1)
		throw GradeTooHighException();
	if (exec_grade > 150)
    	throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Invalid grade, too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Invalid grade, too low";
}

const char* AForm::FormAlreadySigned::what() const throw()
{
    return "Form is already signed";
}

const char* AForm::FormIsNotSigned::what() const throw()
{
    return "The Form is not signed";
}

const char* AForm::BureaucratGradeTooLowException::what() const throw()
{
	return "Bureaucrat grade to low to sign Form";
}
const char*  AForm::BureaucratExecGradeTooLowException::what() const throw()
{
	return "Bureaucrat grade to low to execute Form";
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	std::string sign_state;

	if (obj.getBool() == true)
		sign_state = " is signed. Form grade is ";
	else
		sign_state = " is not signed. Form grade is ";

	os << obj.getName() << sign_state << obj.getGrade() 
	   << " and for execution is required " 
	   << obj.getExecGrade();

	return os;
}

void 		AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw BureaucratExecGradeTooLowException();
	if (!this->is_signed)
		throw FormIsNotSigned();
}

