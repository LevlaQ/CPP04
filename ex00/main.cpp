/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:11:36 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/12 15:45:24 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* wranimal = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();
	

	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << i->getType() << std::endl;
	i->makeSound();

	std::cout << wranimal->getType() << std::endl;
	wranimal->makeSound();
	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wranimal;
	delete cat;
	delete wrongCat;
}