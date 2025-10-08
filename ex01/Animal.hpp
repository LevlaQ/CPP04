/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:17:50 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 13:16:49 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal& copy);
		Animal &operator=(const Animal& assign);

		virtual ~Animal();
		
		virtual const std::string	&getType(void) const;

		virtual void	makeSound() const;
	protected:
		std::string type;
};

#endif