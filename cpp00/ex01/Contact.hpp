#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>

class Contact {
	public:
		Contact();
		~Contact();
	private:
		std::string firstName;
		std::string lastName;
		std::string number;

	void	setFirstName(std::string firstName_);
	void	setLastName(std::string lastName_);
	void	setNumber(std::string number_);
};

#endif
