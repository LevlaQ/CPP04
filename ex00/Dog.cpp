/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:05:46 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 14:07:03 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::Dog(const Dog& copy)
{
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
}

const	std::string	&Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound() const
{
	std::cout << "SOUND: BAAAAAAARK BARK BARK" << std::endl;
}