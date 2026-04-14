#pragma once

#include "AForm.h"
#include <string>

class RobotomyRequestForm : public AForm {
    private:
        const std::string _target;

    public:
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        virtual ~RobotomyRequestForm(void);

        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

        const std::string& getTarget(void) const;

        virtual void execute(Bureaucrat const& executor) const;
};
