/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:03 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:53 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:

		std::string 	target;
		
	public:

		ShrubberyCreationForm(const std::string&);
		ShrubberyCreationForm(const ShrubberyCreationForm& newObj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& newObj);
		~ShrubberyCreationForm();

		const std::string	getTarget() const;
		void				execution_message() const;
};

#endif
