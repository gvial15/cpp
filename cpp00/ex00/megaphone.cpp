#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		std::string	str;
		i = 0;
		while (argv[++i])
		{
			str = argv[i];
			j = -1;
			while (str[++j])
				str[j] = toupper(str[j]);
			std::cout << str;
			if (argv[i + 1])
				std::cout << " ";
		}
		std::cout << "\n";
	}
}
