#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		newFileExtension = ".replace";
	std::string		newFileName;
	std::string		s1;
	std::string		s2;
	std::fstream	file;
	std::fstream	newFile;
	std::string		line;
	std::string		content;
	size_t			position;

	if (argc != 4)
		std::cout << "Argument error\n";
	else
	{
		newFileName = argv[1] + newFileExtension;
		s1 = argv[2];
		s2 = argv[3];
		file.open(argv[1], std::ios::in);
		newFile.open(newFileName, std::ios::out);
		while (getline(file, line)) {
			content.append(line);
			content.append("\n");
		}
		position = content.find(s1);
		while (position != std::string::npos && position < content.length()) {
			content.erase(position, s1.length());
			content.insert(position, s2);
			position += s2.length();
			position = content.find(s1, position);
		}
		newFile << content;
		file.close();
		newFile.close();
	}
}
