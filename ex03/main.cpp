/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 14:30:56 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		/* First form test */
		// Bureaucrat bq("arabi", 12);
		// ShrubberyCreationForm form1("upstairs");

		// form1.beSigned(bq);
		// bq.signForm(form1);
		// bq.executeForm(form1);


		/* Second form test */
		Bureaucrat bq("John", 43);
		RobotomyRequestForm form1("target2");

		form1.beSigned(bq);
		bq.signForm(form1);
		bq.executeForm(form1);


		/* third form test */
		// Bureaucrat bq("John", 5);
		// PresidentialPardonForm form1("target2");

		// form1.beSigned(bq);
		// bq.signForm(form1);
		// bq.executeForm(form1);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}
