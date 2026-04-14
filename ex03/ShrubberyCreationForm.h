/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:48:25 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:48:26 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.h"
#include <string>

class ShrubberyCreationForm : public AForm {
    private:
        const std::string _target;

    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        virtual ~ShrubberyCreationForm(void);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        const std::string& getTarget(void) const;

        virtual void execute(Bureaucrat const& executor) const;
};
