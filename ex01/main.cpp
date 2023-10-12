/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 15:03:20 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		/* bureaucrat can sign */
		Bureaucrat bq("arabi", 11);
		Form form1("home", 20, 20);

		form1.beSigned(bq);
		bq.signForm(form1);


		/* bureaucrat can sign */
		// Bureaucrat bq("arabi", 80);
		// Form form1("Garden", 70, 35);

		// form1.beSigned(bq);
		// bq.signForm(form1);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}
