#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange {
	public:
		BitcoinExchange(std::string input_file);
		~BitcoinExchange();

	void	display_result();

	private:
		std::string						file;
		std::map<std::string, float>	data_base;
};
