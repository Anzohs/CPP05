#pragma once

#include "AForm.h"

class ShrubberyCreationForm : public AForm {
    private:
        const std::string _target;

    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        virtual ~ShrubberyCreationForm(void);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        const std::string& getTarget(void) const;

        virtual void execute(Bureaucrat const& executor) const;
};
