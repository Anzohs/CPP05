/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:45:23 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:45:24 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.h"

class Form {
    private:
        const std::string _name;
        bool _isSigned;
        const int _signedGrade;
        const int _executeGrade;

    public:
        Form(const std::string& name, int signedGrade, int executeGrade);
        ~Form(void);
        Form(const Form& other);
        Form& operator=(const Form& other);

        const std::string& getName(void) const;
        bool getIsSigned(void) const;
        int getSignedGrade(void) const;
        int getExecuteGrade(void) const;

        void beSigned(const Bureaucrat& other);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Form& f);