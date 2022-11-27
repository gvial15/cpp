#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

	void	add();
	void	search();

	private:
		int		ncontact;
		Contact contacts[8];
};

#endif
