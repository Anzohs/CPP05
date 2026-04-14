/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:46:54 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:46:55 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.h"

class RobotomyRequestForm : public AForm {
    private:
        const std::string _target;

    protected:
        virtual void executeAction(void) const;

    public:
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        virtual ~RobotomyRequestForm(void);

        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

        const std::string& getTarget(void) const;
};