/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:42 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:51 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string& str, int nbr) : name(str), grade(nbr)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat& newObj) : name(newObj.name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	this->grade = newObj.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& newObj)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &newObj)
    {
		this->grade = newObj.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const std::string&	Bureaucrat::getName() const
{
	return this->name;
}

int		Bureaucrat::getGrade() const
{
	return this->grade;
}

int		Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	this->grade -= 1;
	return this->grade;
}

int		Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	this->grade += 1;
	return this->grade;
}

void	Bureaucrat::checkGrade()
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
    	throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Invalid grade, too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Invalid grade, too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

void			Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		form.execution_message();
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
    {
        std::cerr << this->getName()
				  << " couldn't execute "
				  << form.getName()
				  << " because "
				  << e.what() << '\n';
    }
}

void		Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() 
				  << " signed " 
				  << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() 
				  << " couldn’t sign "
				  << form.getName()
				  << " because "
				  << e.what()
				  << std::endl;
	}
}