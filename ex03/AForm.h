#pragma once

#include <iostream>

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _executeGrade;

    public:
        AForm(const std::string& name, int signGrade, int executeGrade);
        AForm(const AForm& other);
        virtual ~AForm(void);

        AForm& operator=(const AForm& other);

        const std::string& getName(void) const;
        bool getIsSigned(void) const;
        int getSignedGrade(void) const;
        int getExecuteGrade(void) const;

        void beSigned(const Bureaucrat& other);
        virtual void execute(Bureaucrat const& executor) const = 0;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class FormNotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const AForm& f);
