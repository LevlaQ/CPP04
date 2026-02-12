/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:59:25 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/12 17:10:55 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		Dog &operator=(const Dog& assign);
		
		virtual ~Dog();

		virtual const std::string	&getType(void) const;
		
		virtual void	makeSound() const;
};

#endif