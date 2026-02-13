/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:43:56 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/13 13:13:59 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

/*
	Cat constructor'ını çalıştırırken eğer input alan
	base class'ın constructor'ını çağırmasını istiyorsan
	: Base (parameter) olarak bir belirtme yapmak zorundasın
	Ama bu etkinlikte gerek yok gibi
*/

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		Cat &operator=(const Cat& assign);
		
		virtual ~Cat();

		virtual const std::string	&getType(void) const;
		const std::string	&getIdea(int index) const;
		void	setIdea(const std::string& idea, int const index);
		
		virtual void	makeSound() const;
	private:
		Brain	*brain;
};

#endif