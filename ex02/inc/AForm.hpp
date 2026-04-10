/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:21 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:49 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
	private:

		const std::string  	name;
		bool				is_signed;
		const int			sign_grade;
		const int			exec_grade;

	public:

		AForm(const std::string&, const int, const int);
		AForm(const AForm& newObj);
		AForm& operator=(const AForm& newObj);
		virtual ~AForm();

		virtual const std::string&	getName() const;
		int							getGrade() const;
		int							getExecGrade() const;
		bool						getBool() const;

		void						setBool();

		void						beSigned(const Bureaucrat&);

		void 						checkGrade();

		void 						execute(Bureaucrat const & executor) const;

		virtual void				execution_message() const = 0;

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
		class FormIsNotSigned : public std::exception 
		{
			public:
    			const char* what() const throw();
		};
		class BureaucratGradeTooLowException : public std::exception 
		{
			public:
    			const char* what() const throw();
		};
		class BureaucratExecGradeTooLowException : public std::exception 
		{
			public:
    			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif
