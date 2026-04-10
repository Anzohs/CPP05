/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:28 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:50 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:

		std::string 	target;

	public:

		PresidentialPardonForm(const std::string&);
		PresidentialPardonForm(const PresidentialPardonForm& newObj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& newObj);
		~PresidentialPardonForm();

		const std::string	getTarget() const;
		void				execution_message() const;
};

#endif
