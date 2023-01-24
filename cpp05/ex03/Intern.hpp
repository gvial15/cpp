#ifndef INTERN_H
#define INTERN_H

# include <iostream>

class Form;

class Intern {
	public:
		Intern();
		Intern(const Intern &og);
		Intern& operator=(const Intern &og);
		~Intern();
	
	Form&	makeForm(std::string formName, std::string target);
};

#endif