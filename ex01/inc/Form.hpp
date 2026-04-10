/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:24:11 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:42 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	private:

		const std::string  	name;
		bool				is_signed;
		const int			grade;
		const int			exec_grade;

	public:

		Form(const std::string&, const int, const int);
		Form(const Form& newObj);
		Form& operator=(const Form& newObj);
		~Form();

		const std::string&	getName() const;
		int					getGrade() const;
		int					getExecGrade() const;
		bool				getBool() const;

		void				setBool();

		void				beSigned(const Bureaucrat&);

		void 				checkGrade();

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
		class FormAlreadySigned : public std::exception 
		{
			public:
    			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
