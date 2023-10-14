/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:22 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/14 13:27:36 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		/* valid form */
		Bureaucrat bq("arabi", 20);
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");

		if (rrf)
		{
			rrf->beSigned(bq);
			bq.signForm(*rrf);
			rrf->execute(bq);

			delete rrf;
		}

		/* invalid form name */
		// Bureaucrat bq("arabi", 2);
		// Intern someRandomIntern;
		// AForm* rrf;

		// rrf = someRandomIntern.makeForm("presidential pardondd", "Bender");

		// if (rrf)
		// {
		// 	rrf->beSigned(bq);
		// 	bq.signForm(*rrf);
		// 	rrf->execute(bq);

		// 	delete rrf;
		// }
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}
