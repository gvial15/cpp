#ifndef FORM_H
#define FORM_H

# include <iostream>

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string name, unsigned int sign, unsigned int execute);
		Form(const Form &og);
		Form& operator=(const Form &og);
		~Form();

	const std::string	getName() const;
	unsigned int		getSign() const;
	unsigned int		getExecute() const;
	unsigned int		getIsSigned() const;
	void				beSigned(const Bureaucrat &bureaucrat);

	virtual void		executeAction() = 0;
	void				execute(Bureaucrat const & executor);

	class GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char *what() const throw();
	};

	class FormNotSignedException : public std::exception {
		public:
			const char *what() const throw();
	};

	private:
		const std::string	name_;
		unsigned int		sign_;
		unsigned int		execute_;
		bool				isSigned_;
};

std::ostream& operator<<(std::ostream &out, const Form &obj);

#endif