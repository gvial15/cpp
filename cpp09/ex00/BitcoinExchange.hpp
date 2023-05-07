#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <map>


class BitcoinExchange {
	public:
		BitcoinExchange(std::string input_file);
		~BitcoinExchange();

	void		display_result();
	private:
		int								is_out_of_bound(std::string date);
		std::string						lower_date(std::string date);
		std::string						find_closest_date(std::string from_date);
		std::string						file;
		std::map<std::string, float>	data_base;
		std::string						lowest_db_date;
};
