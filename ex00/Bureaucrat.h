#pragma once

#include <iostream>

typedef char* string;

class Bureaucrat{
    private:
        const std::string name;
        int   grade;
        void    GradeTooHighException(void) const;
        void    GradeTooLowException(void)  const;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& other);
        int getGrade(void) const;
        std::string getName(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
};

//operator overload
std::ostream& operator<<(std::ostream& os,const Bureaucrat& bc);