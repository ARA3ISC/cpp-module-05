/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/11 15:58:59 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		/* bureaucrat can sign */
		Bureaucrat bq("arabi", 10);

		Form myForm("contract 1", 10, 8);
		myForm.beSigned(bq);
		std::cout << myForm << std::endl;
		bq.signForm(myForm);


		/* bureaucrat cannot sign */
		// Bureaucrat bq("arabi", 10);

		// Form myForm("contract 1", 3, 8);
		// myForm.beSigned(bq);
		// std::cout << myForm << std::endl;
		// bq.signForm(myForm);
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}


	return 0;
}

