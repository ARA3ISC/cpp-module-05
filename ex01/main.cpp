/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/11 15:23:29 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bq("arabi", 0);

		Form myForm("form1", 10, 8);
		myForm.beSigned(bq);


		std::cout << myForm << std::endl;
		// std::cout << f << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}


	return 0;
}

