/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/04 19:06:57 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("arabi", 22);
	std::cout << std::endl;

	std::cout << "name : " << b.getName() << " | grade : " << b.getGrade() << std::endl;

	Bureaucrat b1 = b;

	// b1 = b;
	std::cout << std::endl;
	std::cout << "name : " << b1.getName() << " | grade : " << b1.getGrade() << std::endl;
	return 0;
}

