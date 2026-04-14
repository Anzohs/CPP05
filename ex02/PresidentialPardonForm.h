/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:46:48 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:46:48 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.h"

class PresidentialPardonForm : public AForm {
    private:
        const std::string _target;

    protected:
        virtual void executeAction(void) const;

    public:
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        virtual ~PresidentialPardonForm(void);

        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

        const std::string& getTarget(void) const;
};