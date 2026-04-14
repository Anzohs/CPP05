/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:47:51 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:47:52 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"

#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

namespace {
    typedef AForm* (*FormCreator)(const std::string& target);

    AForm* createShrubbery(const std::string& target) {
        return (new ShrubberyCreationForm(target));
    }

    AForm* createRobotomy(const std::string& target) {
        return (new RobotomyRequestForm(target));
    }

    AForm* createPresidential(const std::string& target) {
        return (new PresidentialPardonForm(target));
    }
}

Intern::Intern(void) {}

Intern::Intern(const Intern& other) {
    (void)other;
}

Intern::~Intern(void) {}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return (*this);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
    const std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    const FormCreator creators[3] = {
        &createShrubbery,
        &createRobotomy,
        &createPresidential
    };

    for (int i = 0; i < 3; ++i) {
        if (formName == names[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (creators[i](target));
        }
    }
    std::cout << "Intern cannot create " << formName << std::endl;
    return (NULL);
}
