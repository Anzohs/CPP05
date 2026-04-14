/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:46:23 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:46:24 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _executeGrade;

    protected:
        virtual void executeAction(void) const = 0;

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
        void execute(Bureaucrat const& executor) const;

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