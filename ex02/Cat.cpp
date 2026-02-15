/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:18:32 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/14 19:09:28 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

/*
	We are not using '=' overload here, as the "delete" in the
	overload can cause seg if the copy constructer is used to
	create a new istant. This instant would not have an existing
	brain instance, thus delete will cause segmentation fault.
*/
Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain(*(copy.brain));
}

Cat &Cat::operator=(const Cat& assign)
{
	if(this != &assign)
	{
		Animal::operator=(assign);
		this->type = assign.type;
		*(this->brain) = *(assign.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->brain;
}

const	std::string	&Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << "SOUND: MEEEOOOOOOOOOOOW" << std::endl;
}

const std::string	&Cat::getIdea(int const index) const
{
	return (this->brain->getIdea(index));
}

void	Cat::setIdea(const std::string& idea, int const index)
{
		this->brain->setIdea(idea, index);
}
