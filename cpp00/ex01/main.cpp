#include "PhoneBook.hpp"
#include <ostream>
#include <system_error>

int	main()
{
	PhoneBook	phonebook;
	std::string		entry;

	while (1)
	{
		std::cout << "WELCOME TO PHONEBOOK" << std::endl << std::endl;
		std::cout << "enter command: (LIST, ADD, DELETE, EXIT)" << std::endl;
		getline(std::cin, entry);

		if (!entry.compare("LIST"))
			std::cout << "1";
			// phonebook.list();
		else if (!entry.compare("ADD"))
			std::cout << "2";
			// phonebook.add();
		else if (!entry.compare("DELETE"))
			std::cout << "3";
			// phonebook.delete();
		else if (!entry.compare("EXIT"))
			break ;
		else
		 	std::cin.clear();
	}
	return (0);
}
