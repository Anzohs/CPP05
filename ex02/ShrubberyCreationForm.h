/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:47:05 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:47:19 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.h"

class ShrubberyCreationForm : public AForm {
    private:
        const std::string _target;

    protected:
        virtual void executeAction(void) const;

    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        virtual ~ShrubberyCreationForm(void);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        const std::string& getTarget(void) const;
};