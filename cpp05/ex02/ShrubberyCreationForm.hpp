#ifndef SHRUBBERYCREATIONFROM_H
#define SHRUBBERYCREATIONFROM_H

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &og);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &og);
		~ShrubberyCreationForm();

	virtual void	executeAction();

	private:
		std::string	target_;
};

#endif