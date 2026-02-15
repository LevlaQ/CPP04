/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:59:25 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/13 14:55:39 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		Dog &operator=(const Dog& assign);
		
		virtual ~Dog();

		virtual const std::string	&getType(void) const;
		const std::string	&getIdea(int index) const;
		void	setIdea(const std::string& idea, int const index);
		
		virtual void	makeSound() const;
	private:
		Brain	*brain;
};

#endif