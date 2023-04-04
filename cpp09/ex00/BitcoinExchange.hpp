#include <iostream>
#include <stdlib.h>
#include <map>

class BitcoinExchange {
	public:
		BitcoinExchange(std::string input_file);
		~BitcoinExchange();

	void	display_result();

	private:
		std::map<std::string, float>	price;
		std::map<std::string, float>	qty;
};
