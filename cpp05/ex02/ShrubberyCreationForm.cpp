#include "ShrubberyCreationForm.hpp"
#include <fstream>

// default constructor
ShrubberyCreationForm::ShrubberyCreationForm() {}

// constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("ShrubberyCreationForm", 145, 137), target_(target) {
	std::cout << "ShrubberyCreationForm constructor have been called\n";
}

// copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &og) :
Form("ShrubberyCreationForm", 145, 137), target_(og.target_) {
	std::cout << "ShrubberyCreationForm copy constructor have been called\n";
}

// copy assignement operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &og) {
	if (this == &og)
		return (*this);
	this->target_ = og.target_;
	return (*this);
}

// destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor have been called\n";
}

// method
void	ShrubberyCreationForm::executeAction() {
	std::ofstream file;
	file.open(target_.append("_shrubbery"));
	file << "                                                         .\n";
	file << "                                              .         ; \n";
	file << "                 .              .              ;%     ;;  \n";
	file << "                   ,           ,                :;%  %;   \n";
	file << "                    :         ;                   :;%;'     .,   \n";
	file << "           ,.        %;     %;            ;        %;'    ,;\n";
	file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
	file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
	file << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
	file << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
	file << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
	file << "                    `:%;.  :;bd%;          %;@%;'\n";
	file << "                      `@%:.  :;%.         ;@@%;'   \n";
	file << "                        `@%.  `;@%.      ;@@%;         \n";
	file << "                          `@%%. `@%%    ;@@%;        \n";
	file << "                            ;@%. :@%%  %@@%;       \n";
	file << "                              %@bd%%%bd%%:;     \n";
	file << "                                #@%%%%%:;;\n";
	file << "                                %@@%%%::;\n";
	file << "                                %@@@%(o);  . '         \n";
	file << "                                %@@@o%;:(.,'         \n";
	file << "                            `.. %@@@o%::;         \n";
	file << "                               `)@@@o%::;         \n";
	file << "                                %@@(o)::;        \n";
	file << "                               .%@@@@%::;         \n";
	file << "                               ;%@@@@%::;.          \n";
	file << "                              ;%@@@@%%:;;;. \n";
	file << "                          ...;%@@@@@%%:;;;;,..    \n";
	file.close();
}