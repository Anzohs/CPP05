/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:24:30 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:46 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <exception>

class Bureaucrat
{
	private:

	const std::string    name;
	int 		 		 grade;

	public:

		Bureaucrat(const std::string&, int);
		Bureaucrat(const Bureaucrat& newObj);
		Bureaucrat& operator=(const Bureaucrat& newObj);
		~Bureaucrat();

		const std::string&	getName() const;
		int					getGrade() const;

		int		incrementGrade();
		int		decrementGrade();

		void 	checkGrade();

		class GradeTooHighException : public std::exception 
		{
			public:
    			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception 
		{
			public:
    			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
