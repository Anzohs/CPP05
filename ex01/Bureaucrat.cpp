/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:45:13 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:45:14 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"

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

void Bureaucrat::signForm(Form& form) const {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("bureaucrat grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("bureaucrat grade is too low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc) {
    os << bc.getName() << ", bureaucrat grade " << bc.getGrade();
    return (os);
}