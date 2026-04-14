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
        std::cout << _name << " signs " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const& form) const {
    try {
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
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