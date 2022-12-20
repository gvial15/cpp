#ifndef ANIMAL_H
#define ANIMAL_H

# include <iostream>

class Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &og);
		Animal&	operator=(const Animal& og);
		~Animal();

		std::string	getType() const;
		void	makeSound();
		virtual void abstract() = 0;

	protected:
		std::string	type_;
};

#endif