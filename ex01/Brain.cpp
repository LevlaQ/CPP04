/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:57:45 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/13 14:44:54 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "I have no idea";
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(const Brain& assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = assign.ideas[i];
	}
	return (*this);
}

const std::string	&Brain::getIdea(int const index) const
{
		return (this->ideas[index]);
}

void	Brain::setIdea(const std::string& idea, int const index)
{
		this->ideas[index] = idea;
}