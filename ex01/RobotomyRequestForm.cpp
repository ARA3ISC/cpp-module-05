/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:27:33 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 14:27:43 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj): AForm("RobotomyRequestForm", obj.getGradeToSign(), obj.getGradeToExec())
{
	this->_target = obj._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	if (&obj != this)
		return *this;
	this->_target = obj._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->is_Signed() && executor.getGrade() <= this->getGradeToExec())
	{
		srand(time(0));
		if (std::rand() % 100 < 50)
			std::cout << this->_target << GREEN << " has been robotomized successfully." << RESET << std::endl;
		else
			std::cout << RED << "robotomy failed." << RESET << std::endl;

	}
}
