/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:10 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:53 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern();
		Intern(const Intern& newObj);
		Intern& operator=(const Intern& newObj);
		~Intern();

		AForm*			makeForm(const std::string, const std::string);

		class InexistentForm : public std::exception 
		{
			public:
    			const char* what() const throw();
		};
		class InexistentTarget : public std::exception 
		{
			public:
    			const char* what() const throw();
		};
};

#endif
