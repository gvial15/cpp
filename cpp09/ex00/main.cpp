#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2 )
		BitcoinExchange	btc(argv[1]);
	else
		std::cout << "argument error\n";

	return (0);
}