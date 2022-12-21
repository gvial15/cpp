#ifndef FORM_H
#define FORM_H

# include <iostream>

class Form {
	public:
		Form();
		Form(std::string name, unsigned int sign, unsigned int execute);
		Form(const Form &og);
		Form& operator=(const Form &og);
		~Form();

	unsigned int	getSign() const;
	unsigned int	getExecute() const;
	unsigned int	getIsSigned() const;

	private:
		const std::string	name_;
		unsigned int		sign_;
		unsigned int		execute_;
		bool				isSigned_;
};

#endif