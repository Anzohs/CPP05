/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:47:00 by hladeiro          #+#    #+#             */
/*   Updated: 2026/04/14 18:47:01 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this == &other)
        return (*this);
    AForm::operator=(other);
    return (*this);
}

const std::string& ShrubberyCreationForm::getTarget(void) const { return (_target); }

void ShrubberyCreationForm::executeAction(void) const {
    std::ofstream file((_target + "_shrubbery").c_str());
    file << "              oxoxoo    ooxoo\n";
    file << "            ooxoxo oo  oxoxooo\n";
    file << "           oooo xxoxoo ooo ooox\n";
    file << "         oo xoxoxoxo xx  ooo   ooo\n";
    file << "        oooo o ooxo  o xxx   oooxoxo\n";
    file << "         ox xxx  xoxx  xoxo  xoxoxo\n";
    file << "         oxo  o  xxxxxxxxxxoxo o  o\n";
    file << "           oxo xo xxxxxxx xo xoxo\n";
    file << "             oxo  o xxxxx o xoxo\n";
    file << "               oxoxo ooo ooo\n";
}