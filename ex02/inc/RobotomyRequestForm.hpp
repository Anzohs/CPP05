/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:22:33 by jomunoz           #+#    #+#             */
/*   Updated: 2026/04/10 22:24:50 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:

		std::string 	target;
		
	public:

		RobotomyRequestForm(const std::string&);
		RobotomyRequestForm(const RobotomyRequestForm& newObj);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& newObj);
		~RobotomyRequestForm();

		const std::string	getTarget() const;
		void				execution_message() const;
};

#endif
