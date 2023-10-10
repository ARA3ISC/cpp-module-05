/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/10 22:23:42 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// ! still the case of creating object with the default constructor
		Bureaucrat b("arabi", 149);

		b.decrementBureaucrat();
		b.decrementBureaucrat();

		std::cout << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;


		// Bureaucrat b1;

		// b1 = b;

		// b1.incrementBureaucrat();

		// std::cout << std::endl;
		// std::cout << "name : " << b1.getName() << " | grade : " << b1.getGrade() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}


	return 0;
}

