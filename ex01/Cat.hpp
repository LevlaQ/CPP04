/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:43:56 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 13:57:42 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

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
		
		~Cat();

		const std::string	&getType(void) const;
		
		void	makeSound() const;
	private:
		std::string type;
};

#endif