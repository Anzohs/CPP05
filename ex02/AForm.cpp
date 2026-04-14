/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:46:14 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:46:16 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"
#include "Bureaucrat.h"

AForm::AForm(const std::string& name, int signGrade, int executeGrade)
    : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (_signGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    if (_signGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade) {}

AForm::~AForm(void) {}

AForm& AForm::operator=(const AForm& other) {
    if (this == &other)
        return (*this);
    _isSigned = other._isSigned;
    return (*this);
}

const std::string& AForm::getName(void) const { return (_name); }
bool AForm::getIsSigned(void) const { return (_isSigned); }
int AForm::getSignedGrade(void) const { return (_signGrade); }
int AForm::getExecuteGrade(void) const { return (_executeGrade); }

void AForm::beSigned(const Bureaucrat& other) {
    if (other.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSigned = true;
}

void AForm::execute(Bureaucrat const& executor) const {
    if (!_isSigned)
        throw FormNotSignedException();
    if (executor.getGrade() > _executeGrade)
        throw GradeTooLowException();
    executeAction();
}

const char* AForm::GradeTooHighException::what() const throw() {
    return ("AForm grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return ("AForm grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw() {
    return ("form is not signed");
}

std::ostream& operator<<(std::ostream& os, const AForm& f) {
    os << f.getName() << ", sign grade " << f.getSignedGrade()
       << ", execute grade " << f.getExecuteGrade()
       << ", signed: " << (f.getIsSigned() ? "yes" : "no");
    return (os);
}