/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:35:45 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/13 14:02:39 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	public:

		Brain(const Brain& copy);
		Brain &operator=(const Brain& assign);
		const std::string	&getIdea(int const index) const;
		void	setIdea(const std::string& idea, int const index);

		Brain();
		~Brain();
	
	private:
		std::string ideas[100];
};

#endif