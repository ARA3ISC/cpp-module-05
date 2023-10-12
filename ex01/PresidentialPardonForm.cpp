/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:02:56 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 11:10:10 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj): AForm("PresidentialPardonForm", obj.getGradeToSign(), obj.getGradeToExec())
{
	this->_target = obj._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	if (&obj != this)
		return *this;
	this->_target = obj._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::cout << "begin PresidentialPardonForm executing\n";
}
