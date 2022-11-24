#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

	void	set_ncontact(int n);
	int		get_ncontact();

	private:
		int		ncontact;
		Contact contacts[8];

};

#endif
