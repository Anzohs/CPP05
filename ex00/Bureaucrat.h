#pragma once

#include <iostream>

class Bureaucrat{
    private:
        const std::string name;
        int   i;
        void    GradeTooHighException(void) const;
        void    GradeTooLowException(void)  const;
    public:
        int getGrade() const;
        std::string getName() const;
};

//operator overload
std::ostream& operator<<(std::ostream& os,const Bureaucrat& bc);