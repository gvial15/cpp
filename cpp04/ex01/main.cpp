#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	Cat	cat1;
	Cat	cat2;
	Cat	cat3(cat1);

	Dog	dog1;
	Dog	dog2;
	Dog	dog3(dog1);

	cat2 = cat1;
	dog2 = dog1;

	cat1.makeSound();
	cat2.makeSound();
	cat3.makeSound();
	dog1.makeSound();
	dog2.makeSound();
	dog3.makeSound();
}
