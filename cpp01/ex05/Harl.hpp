#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	public:
		Harl();
		~Harl();

	void complain(std::string level);

	std::string	level[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void	(Harl::*func[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif