#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error: could not open file.\n", exit(0);
	BitcoinExchange	btc(argv[1]);
	btc.display_result();
	return (0);
}
