/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/11 19:31:30 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		RobotomyRequestForm form1("home");
		RobotomyRequestForm form2 = form1;


		// std::cout << "target : " << form2._target << std::endl;
		std::cout << "tosign : " << form2.getGradeToSign() << std::endl;
		std::cout << "toexec : " << form2.getGradeToExec() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}
