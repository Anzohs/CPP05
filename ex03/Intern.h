/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:47:54 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:47:54 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class AForm;

class Intern {
    public:
        Intern(void);
        Intern(const Intern& other);
        ~Intern(void);

        Intern& operator=(const Intern& other);

        AForm* makeForm(const std::string& formName, const std::string& target);
};
