#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>

class Contact {
	public:
		Contact();
		~Contact();

	// getters
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNumber();
	std::string	getNickname();
	std::string	getDarkestSecret();

	// setters
	void	setFirstName(std::string firstName_);
	void	setLastName(std::string lastName_);
	void	setNumber(std::string number_);
	void	setNickname(std::string nickname_);
	void	setDarkestSecret(std::string darkestSecret_);

	private:
		std::string firstName;
		std::string lastName;
		std::string number;
		std::string nickname;
		std::string darkestSecret;
};

#endif
