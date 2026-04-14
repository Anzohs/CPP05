#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this == &other)
        return (*this);
    this->grade = other.grade;
    return (*this);
}

std::string Bureaucrat::getName(void)const {return (this->name);}
int Bureaucrat::getGrade(void) const {return (this->grade);}
std::ostream& operator<<(std::ostream& os,const Bureaucrat& bc) {
    os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << ".";
    return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}

void Bureaucrat::incrementGrade(void){
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade(void){
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}
