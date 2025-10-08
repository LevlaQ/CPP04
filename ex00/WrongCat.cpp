/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:31:16 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 14:36:57 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat& assign)
{
	if(this != &assign)
		this->type = assign.type;
	return (*this);
}

WrongCat::~WrongCat()
{
}

const	std::string	&WrongCat::getType(void) const
{
	return (this->type);
}

void	WrongCat::makeSound() const
{
	std::cout << "SOUND: MEEEOOOOOOOOOOOW" << std::endl;
}