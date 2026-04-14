/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:46:27 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:46:28 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (_grade < 1)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this == &other)
        return (*this);
    _grade = other._grade;
    return (*this);
}

const std::string& Bureaucrat::getName(void) const { return (_name); }
int Bureaucrat::getGrade(void) const { return (_grade); }

void Bureaucrat::incrementGrade(void) {
    if (_grade == 1)
        throw GradeTooHighException();
    --_grade;
}

void Bureaucrat::decrementGrade(void) {
    if (_grade == 150)
        throw GradeTooLowException();
    ++_grade;
}

void Bureaucrat::signForm(AForm& form) const {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " couldn't sign " << form << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const& form) const {
    try {
        form.execute(*this);
        std::cout << _name << " executed " << form << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " couldn't execute " << form << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("bureaucrat grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("bureaucrat grade is too low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc) {
    os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << ".";
    return (os);
}