#include <iostream>

static char	findType(std::string s)
{
	if (s.at(s.length() - 1) == 'f' && s.length() != 1)
		return ('f');
	else if (s.find('.') !=  std::string::npos)
		return ('d');
	else if (!std::isdigit(s[0]) && s.length() == 1)
		return ('c');
	try {
		std::stoi(s);
		return ('i');
	} catch (std::exception &e) {
		return ('d');
	}
}

double	convert(std::string s)
{
	char	type;
	double	value;

	type = findType(s);
	try {
		if (type == 'c')
			value = s[0];
		if (type == 'i')
			value = std::stoi(s);
		if (type == 'f')
			value = std::stod(s);
		if (type == 'd')
			value = std::stod(s);
	} catch (std::exception &e) {
		std::cerr << "error: Conversion impossible\n";
		exit(0);
	}
	return (value);
}

int	main(int argc, char **argv)
{
	double	actualValue;

	if (argc != 2)
		std::cerr << "wrong number of args\n";
	else
	{
		actualValue = convert(argv[1]);
		if ((std::string)argv[1] == "nan" || (std::string)argv[1] == "nanf")
			std::cout << "char: imposible" << std::endl;
		else if (actualValue >= 33 && actualValue <= 126)
			std::cout << "char:" << static_cast<char>(actualValue) << std::endl;
		else
		 	std::cout << "char: Non displayable\n";
		if ((std::string)argv[1] == "nan" || (std::string)argv[1] == "nanf")
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(actualValue) << std::endl;;
		std::cout << std::fixed << "float: " << static_cast<float>(actualValue) << "f\n";
		std::cout << std::fixed << "double: " << static_cast<double>(actualValue) << std::endl;
	}
	return (0);
}
