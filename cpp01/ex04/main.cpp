#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		newFileExtension = ".replace";
	std::string		newFileName = argv[1] + newFileExtension;
	std::fstream	file;
	std::fstream	newFile;
	std::string		line;

	if (argc != 4)
		std::cout << "Argument error\n";
	else
	{
		file.open(argv[1], std::ios::in);
		newFile.open(newFileName, std::ios::out);
		while (getline(file, line))
		{
			if (line.compare(argv[2]) == 0)
				newFile << argv[3] << std::endl;
			else
			 	newFile << line << std::endl;
		}
		file.close();
		newFile.close();
	}
}