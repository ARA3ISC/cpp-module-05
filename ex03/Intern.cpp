/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:51:14 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 17:18:39 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(const Intern& obj) {(void)obj;}
Intern& Intern::operator=(const Intern& obj) {
	(void)obj;
	return *this;
}
Intern::~Intern(){}

int getFormNumber(std::string formName)
{
	for (int i = 0; i < 3; i++)
	{
		if (formName == "shrubbery creation")
			return 1;
		if (formName == "robotomy request")
			return 2;
		if (formName == "presidential pardon")
			return 3;
	}
	return 4;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& formTarget)
{
	AForm* newForm;
	switch (getFormNumber(formName))
	{
	case 1:
		newForm = new ShrubberyCreationForm(formTarget);
		break;
	case 2:
		newForm = new RobotomyRequestForm(formTarget);
		break;
	case 3:
		newForm = new PresidentialPardonForm(formTarget);
		break;
	case 4:
		std::cout << RED << "Invalid form name" << RESET << std::endl;
		return NULL;
	}
	return newForm;
}
