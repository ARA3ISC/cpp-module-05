/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:27:33 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 11:09:58 by maneddam         ###   ########.fr       */
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
	(void)executor;
	std::cout << "begin RobotomyRequestForm executing\n";
}
