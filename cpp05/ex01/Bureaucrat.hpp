#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>
# include <exception>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &og);
		Bureaucrat operator=(const Bureaucrat &og);
		~Bureaucrat();
		const std::string	name_;
		int					grade_;

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

	class GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &obj);

#endif