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
