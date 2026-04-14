#include "Form.h"

Form::Form(const std::string& name, int signedGrade, int executeGrade)
    : _name(name), _isSigned(false), _signedGrade(signedGrade), _executeGrade(executeGrade) {
    if (_signedGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    if (_signedGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other)
    : _name(other._name),
      _isSigned(other._isSigned),
      _signedGrade(other._signedGrade),
      _executeGrade(other._executeGrade) {}

Form::~Form(void) {}

Form& Form::operator=(const Form& other) {
    if (this == &other)
        return (*this);
    _isSigned = other._isSigned;
    return (*this);
}

const std::string& Form::getName(void) const { return (_name); }
bool Form::getIsSigned(void) const { return (_isSigned); }
int Form::getSignedGrade(void) const { return (_signedGrade); }
int Form::getExecuteGrade(void) const { return (_executeGrade); }


void Form::beSigned(const Bureaucrat& other)
{
    if (other.getGrade() > _signedGrade)
        throw GradeTooLowException();
    _isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("form grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("form grade is too low");
}

std::ostream& operator<<(std::ostream& os, const Form& f) {
    os << f.getName() << ", form sign grade " << f.getSignedGrade()
       << ", execute grade " << f.getExecuteGrade()
       << ", signed: " << (f.getIsSigned() ? "yes" : "no");
    return (os);
}