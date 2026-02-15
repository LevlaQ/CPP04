/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:17:50 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/15 17:28:38 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	public:
		
		Animal(const Animal& copy);
		Animal &operator=(const Animal& assign);

		Animal();
		virtual ~Animal();
		
		virtual const std::string	&getType(void) const;

		virtual void	makeSound() const = 0;
	protected:
		std::string type;
};

#endif