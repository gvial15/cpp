#include "BitcoinExchange.hpp"

// constructor
BitcoinExchange::BitcoinExchange(std::string arg)
{
	int				find;
	std::string		line;
	std::ifstream 	input_file(arg);
	std::ifstream 	data_base_file("data.csv");

	this->file = arg;
	if(input_file.fail())
		std::cout << "input file error\n";
	std::getline(data_base_file, line);
	while (std::getline(data_base_file, line))
	{
		find = line.find(",");
		data_base.insert(std::pair<std::string, float>(line.substr(0, find),\
			stof(line.substr(find + 1, line.size() - find))));
	}
}

// destructor
BitcoinExchange::~BitcoinExchange() {}

// display list
void	BitcoinExchange::display_result()
{
	float			qty;
	long			find;
	std::string		line;
	std::ifstream 	intput_file(file);

	std::getline(intput_file, line);
	while (std::getline(intput_file, line))
	{
		find = line.find("|");
		if (find == -1)
			std::cout << "Error: bad input => " << line << std::endl;
		else
		{
			qty = stof(line.substr(find + 1, line.size() - find));
			if (qty < 0)
				std::cout << "Error: not a positive number.\n";
			else if (qty > 1000)
				std::cout << "Error: too large a number.\n";
			else if (data_base.count(line.substr(0, find - 1)))
					std::cout << line.substr(0, find - 1) << " => " << qty << " = "\
						<< qty * data_base[line.substr(0, find - 1)] << std::endl;
			// date not in database, need to find last recorded price in database
			else if (!data_base.count(line.substr(0, find - 1)))
				std::cout << line.substr(0, find - 1) << " => " << qty << " = "\
					<< data_base[line.substr(0, find - 1)] << std::endl;
		}
	}
}
