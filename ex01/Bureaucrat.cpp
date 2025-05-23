#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    if (grade < 1)
        this->GradeTooLowException();
    if (grade > 150)
        this->GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade()
{}

Bureaucrat::~Bureaucrat(){std::cout << this->getName() << " was destryoed\n";};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this == &other)
        return (*this);
    this->grade = other.grade;
    return (*this);
}

std::string Bureaucrat::getName(void)const {return (this->name);}
int Bureaucrat::getGrade(void) const {return (this->grade);}

std::ostream& operator<<(std::ostream& os,const Bureaucrat& bc) {
    os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << "\n";
    return (os);
}

void    Bureaucrat::GradeTooLowException(void) const {throw std::runtime_error("Grade is Too Low");}
void    Bureaucrat::GradeTooHighException(void) const {throw std::runtime_error("Grade is Too Hight");}

void Bureaucrat::incrementGrade(void){
    if (this->grade == 150)
        this->GradeTooHighException();
    this->grade++;
}

void Bureaucrat::decrementGrade(void){
    if (this->grade == 1)
        this->GradeTooLowException();
    this->grade--;
}