#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &og);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &og);
		~RobotomyRequestForm();

	virtual void	executeAction();

	private:
		std::string	target_;
};

#endif