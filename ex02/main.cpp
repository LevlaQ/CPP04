/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:11:26 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/15 17:31:46 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal* j= new Dog;
	Animal* i= new Cat;

	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << i->getType() << std::endl;
	i->makeSound();

	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "/////////////////////////////" << std::endl;
	std::cout << "// HALF CAT HALF DOG ARRAY //" << std::endl;
	std::cout << "/////////////////////////////" << std::endl;
	std::cout << std::endl;

	Animal* shelter[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
			shelter[i] = new Cat;
		else
			shelter[i] = new Dog;
	}
	
	for (int i = 0; i < 6; i++)
	{
		std::cout << shelter[i]->getType() << std::endl;
		shelter[i]->makeSound();
	}
	for (int i = 0; i < 6; i++)
		delete shelter[i];

	std::cout << std::endl;
	std::cout << "////////////////////////" << std::endl;
	std::cout << "// NOW DEEP COPY TEST //" << std::endl;
	std::cout << "////////////////////////" << std::endl;
	std::cout << std::endl;

	Dog* dog = new Dog;
	Dog* dog_cpy = new Dog(*dog);
	
	dog->setIdea("I am hungry", 3);
	std::cout << dog->getIdea(3) << std::endl;
	std::cout << dog_cpy->getIdea(3) << std::endl;

	delete dog;
	delete dog_cpy;

	Cat cat_one;
	Cat cat_two;
	
	cat_one.setIdea("That filthy dog!", 1);
	std::cout << cat_one.getIdea(1) << std::endl;
	std::cout << cat_two.getIdea(1) << std::endl;

	cat_one = cat_two;

	std::cout << cat_one.getIdea(1) << std::endl;
	std::cout << cat_two.getIdea(1) << std::endl;
}