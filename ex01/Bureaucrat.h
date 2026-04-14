/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:45:15 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:45:16 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form;

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();

        Bureaucrat& operator=(const Bureaucrat& other);

        const std::string& getName(void) const;
        int getGrade(void) const;

        void incrementGrade(void);
        void decrementGrade(void);
        void signForm(Form& form) const;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc);
