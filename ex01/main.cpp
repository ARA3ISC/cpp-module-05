/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 15:04:49 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		/* bureaucrat can sign */
		Bureaucrat bq("arabi", 21);
		Form form1("home", 30, 20);

		form1.beSigned(bq);
		bq.signForm(form1);

		std::cout << form1 << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}
