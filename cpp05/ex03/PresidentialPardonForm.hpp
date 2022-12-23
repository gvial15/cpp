#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &og);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &og);
		~PresidentialPardonForm();

	virtual void	executeAction();

	private:
		std::string	target_;
};

#endif