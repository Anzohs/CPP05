/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:23:17 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:48 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form(const std::string& str, const int grade, const int exec) 
			: name(str), grade(grade), exec_grade(exec)
{
	std::cout << "Default Form constructor called" << std::endl;
	is_signed = false;
	checkGrade();
}

Form::Form(const Form& obj) : name(obj.name), grade(obj.grade), exec_grade(obj.exec_grade)
{
	std::cout << "Form copy constructor called" << std::endl;
	this->is_signed = obj.is_signed;
}

Form& Form::operator=(const Form& obj)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &obj)
		this->is_signed = obj.is_signed;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

const std::string&	Form::getName() const
{
	return this->name;
}

bool			Form::getBool() const
{
	return this->is_signed;
}

int			Form::getGrade() const
{
	return this->grade;
}

int			Form::getExecGrade() const
{
	return this->exec_grade;
}

void				Form::setBool()
{
	this->is_signed = true;
}

void			Form::beSigned(const Bureaucrat& obj)
{
	if (this->getBool() == true)
	{
		throw FormAlreadySigned();
	}
	else if (obj.getGrade() > this->getGrade())
	{
		throw GradeTooLowException();
	}
	setBool();
}

void	Form::checkGrade()
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
    	throw GradeTooLowException();
	if (exec_grade < 1)
		throw GradeTooHighException();
	if (exec_grade > 150)
    	throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Invalid grade, too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Invalid grade, too low";
}

const char* Form::FormAlreadySigned::what() const throw()
{
    return "Form is already signed";
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
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
