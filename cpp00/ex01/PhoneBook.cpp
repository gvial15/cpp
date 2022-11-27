#include "PhoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(void) {
	ncontact = 0;
}

// default destructor
PhoneBook::~PhoneBook(void) {};

// methods
void	PhoneBook::add()
{
	std::string	firstName;
	std::string	lastName;
	std::string	number;
	std::string	nickname;
	std::string	darkestSecret;

	std::cout << "enter name:\n";
	getline(std::cin, firstName);
	if (firstName.empty()) return;
	contacts[ncontact].setFirstName(firstName);
	std::cout << "enter last name:\n";
	getline(std::cin, lastName);
	if (firstName.empty()) return;
	contacts[ncontact].setLastName(lastName);
	std::cout << "enter number:\n";
	getline(std::cin, number);
	if (number.empty()) return;
	contacts[ncontact].setNumber(number);
	std::cout << "enter nickname:\n";
	getline(std::cin, nickname);
	if (nickname.empty()) return;
	contacts[ncontact].setNickname(nickname);
	std::cout << "enter darkest secret:\n";
	getline(std::cin, darkestSecret);
	if (darkestSecret.empty()) return;
	contacts[ncontact].setDarkestSecret(darkestSecret);
	if (ncontact < 7)
		ncontact++;
	std::cout << std::endl;
}

std::string	format(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	printContact(Contact contact)
{
	std::cout << "Name:           " << contact.getFirstName() << std::endl;
	std::cout << "Last name:      " << contact.getLastName() << std::endl;
	std::cout << "Number:         " << contact.getNumber() << std::endl;
	std::cout << "Nickname:       " << contact.getNickname() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::search()
{
	std::string	n;
	int			i;

	if (ncontact == 0)
	{
		std::cout << "no contacts available\n\n";
		return;
	}
	i = -1;
	while (++i < 8)
	{
		std::cout.width(10);
		std::cout << i << " | ";
		std::cout.width(10);
		std::cout << format(contacts[i].getFirstName()) << " | ";
		std::cout.width(10);
		std::cout << format(contacts[i].getLastName()) << " | ";
		std::cout.width(10);
		std::cout << format(contacts[i].getNickname()) << std::endl;
	}
	std::cout << "choose index to look up: \n";
	getline(std::cin, n);
	printContact(contacts[std::atoi(n.c_str())]);
}

// getters
int	PhoneBook::get_ncontact() {
	return (ncontact);
}
