#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    
}

std::ostream& operator<<(std::ostream& os,const Bureaucrat& bc)
{
    os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << "\n";
}