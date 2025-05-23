#include "Form.h"

Form::Form(std::string name, int signedGrade, int executeGrade) : name(name), signedGrade(signedGrade), executeGrade(executeGrade),  isSigned(false){}
Form::Form(const Form& other): name(other.name), signedGrade(other.signedGrade), executeGrade(other.executeGrade),  isSigned(false){}


void Form::beSigned(const Bureaucrat& other)
{
    if (this->isSigned)
        return (std::cout << "This if form is assigned by other Bureaucrat\n", (void)this->isSigned);
    std::cout << other.getName() << " signed " << this->name << "\n";   
}