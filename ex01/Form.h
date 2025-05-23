#pragma once

#include "Bureaucrat.h"


class Form {
    private:
        const  std::string name;
        bool    isSigned;
        const   int  signedGrade;
        const   int  executeGrade;
        void    GradeTooHighException();
        void    GradeTooLowException();
    public:
        Form(std::string name, int signedGrade, int executeGrade);
        ~Form(void);
        Form(const Form& other);
        Form& operator=(const Form& other);
        void    beSigned(const Bureaucrat& other);
};

std::ostream& operator<<(std::ostream& os,const Form& f);