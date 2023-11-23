/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:02:56 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 14:05:37 by maneddam         ###   ########.fr       */
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
	if (this->is_Signed() && executor.getGrade() <= this->getGradeToExec())
		std::cout << this->_target << GREEN << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
	else
		std::cout << this->_target << RED << " hasn't been pardoned." << RESET << std::endl;

}
