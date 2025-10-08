/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:18:32 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 13:58:18 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
}

Cat &Cat::operator=(const Cat& assign)
{
	if(this != &assign)
		this->type = assign.type;
	return (*this);
}

Cat::~Cat()
{
}

const	std::string	&Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << "SOUND: MEEEOOOOOOOOOOOW" << std::endl;
}