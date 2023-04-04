#include "BitcoinExchange.hpp"
#include <fstream>

// constructor
BitcoinExchange::BitcoinExchange(std::string input_file)
{
	int				find;
	std::string		line;
	std::ifstream 	file(input_file);
	std::ifstream 	file2("data.csv");

	std::getline(file, line);
	while (std::getline(file, line))
	{
		find = line.find("|");
		qty.insert(std::pair<std::string, float>(line.substr(0, find - 1), stof(line.substr(find + 1, line.size() - find))));
	}
	std::getline(file2, line);
	while (std::getline(file2, line))
	{
		find = line.find(",");
		price.insert(std::pair<std::string, float>(line.substr(0, find), stof(line.substr(find + 1, line.size() - find))));
	}
	std::cout << price["2013-11-28"] << std::endl;
	std::cout << qty["2011-01-06"] << std::endl;
}

// destructor
BitcoinExchange::~BitcoinExchange() {}