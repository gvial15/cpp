#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string		entry;

	while (1)
	{
		std::cout << "enter command: (ADD, SEARCH, EXIT)" << std::endl;
		getline(std::cin, entry);

		if (!entry.compare("SEARCH"))
			phonebook.search();
		else if (!entry.compare("ADD"))
			phonebook.add();
		else if (!entry.compare("EXIT"))
			break ;
		else
		 	std::cin.clear();
	}
	return (0);
}
