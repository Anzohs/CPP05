/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:26 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:49 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class AForm;

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

		int					incrementGrade();
		int					decrementGrade();

		void 				checkGrade();

		void		 		signForm(AForm&);

		void				executeForm(AForm const & form);

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
