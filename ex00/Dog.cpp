/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:05:46 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/14 15:36:11 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog& assign)
{
	if(this != &assign)
		this->type = assign.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}

const	std::string	&Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound() const
{
	std::cout << "SOUND: BAAAAAAARK BARK BARK" << std::endl;
}