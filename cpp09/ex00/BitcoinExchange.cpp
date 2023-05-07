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
		std::cout << "Error: could not open file\n";
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

// lower a given date by one day
std::string	BitcoinExchange::lower_date(std::string date)
{
	std::string	new_date = date;
	std::string	day = date.substr(8, 2);
	std::string	year = date.substr(0, 4);
	std::string	month = date.substr(5, 2);

	// if day > 1, lower day by 1
	if (stoi(day) > 1)
	{
		new_date.erase(8, 2);
		if (stoi(day) - 1 < 10)
			new_date.insert(8, "0"), new_date.insert(9, std::to_string(stoi(day) - 1));
		else
			new_date.insert(8, std::to_string(stoi(day) - 1));
	}
	// if day == 1, lower month by 1, day == 31
	else if (stoi(day) == 1 && stoi(month) > 1)
	{
		new_date.erase(8, 2);
		new_date.insert(8, "31");
		new_date.erase(5, 2);
		if (stoi(month) - 1 < 10)
			new_date.insert(5, "0"), new_date.insert(6, std::to_string(stoi(month) - 1));
		else
			new_date.insert(5, std::to_string(stoi(month) - 1));
	}
	// if month == 1, lower year by 1, month == 12  && day == 1
	if (stoi(day) == 1 && stoi(month) == 1)
	{
		new_date.erase(0, 4);
		new_date.insert(0, std::to_string(stoi(year) - 1));
		new_date.erase(5, 2);
		new_date.insert(5, "12");
		new_date.erase(8, 2);
		new_date.insert(8, "31");
	}
	return (new_date);
}

// find closest date
std::string	BitcoinExchange::find_closest_date(std::string from_date)
{
	std::string	db_first_date;
	std::string	db_last_date;
	std::string	date;

	date = from_date;
	while (!data_base.count(date))
	{
		data_base.erase(date);
		date = lower_date(date);
	}
	return (date);
}

int	BitcoinExchange::is_out_of_bound(std::string date)
{
	int							find;
	std::vector<std::string>	split;
	std::string					year;
	std::string					month;
	std::string					day;

	// tokenize date in vector<string> split; by delimiter '-' and assign y/m/d
	// year = ;
	// month = ;
	// day = ;
	// is out of bond if..
	// - year is lower/highest than lowest/highest date in db

	// - year is = to lowest/highest db.year, month is </> than lowest/highest db.month

	// - year is = to lowest/highest db.year, month is = to lowest/highest db.day, day is </> than lowest/highest db.day

	return (0);
}

// display list
void	BitcoinExchange::display_result()
{
	float			qty;
	long			find;
	int				oob;
	std::string		line;
	std::string		date;
	std::ifstream 	intput_file(file);

	std::getline(intput_file, line);
	while (std::getline(intput_file, line))
	{
		find = line.find("|");
		if (find == -1)
			std::cout << "Error: bad input => " << line << std::endl;
		else
		{
			date = line.substr(0, find - 1);
			qty = stof(line.substr(find + 1, line.size() - find));
			if (qty < 0)
				std::cout << "Error: not a positive number.\n";
			else if (qty > 1000)
				std::cout << "Error: too large a number.\n";
			// check if date is out of bound and find if its higher or lower than the range
			else if ((oob = is_out_of_bound(date))) {
				// lower date
				if (oob == 1)
					;
				// higher date
				if (oob == 2)
					;
				// bad input
				if (oob == 2)
					std::cout << "Error: bad input => " << line << std::endl;;
			}
			// date is part of data_base
			else if (data_base.count(date))
				std::cout << date << " => " << qty << " = "\
					<< qty * data_base[date] << std::endl;
			// date is not part of data_base
			else if (!data_base.count(date))
			{
				std::cout << line.substr(0, find - 1) << " => " << qty << " = "\
					<< qty * data_base[find_closest_date(date)] << std::endl;
				data_base.erase(date);
			}
		}
	}
}
