/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:54:42 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/11 15:44:42 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* orthodox canonical AForm */

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();

	this->_isSigned = false;
	this->_gradeToSign = gradeToSign;
	this->_gradeToExec = gradeToExec;
	std::cout << "Constructing AForm" << std::endl;
}

AForm::AForm(const AForm &obj) : _name(obj._name)
{
	this->_isSigned = obj._isSigned;
	this->_gradeToSign = obj._gradeToSign;
	this->_gradeToExec = obj._gradeToExec;
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &obj)
{
	this->_isSigned = obj._isSigned;
	this->_gradeToSign = obj._gradeToSign;
	this->_gradeToExec = obj._gradeToExec;
	std::cout << "AForm copy assignment operator called" << std::endl;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

/* getters */

const std::string &AForm::getName() const
{
	return this->_name;
}

bool AForm::is_Signed() const
{
	return _isSigned;
}

int AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExec() const
{
	return this->_gradeToExec;
}

std::ostream &operator<<(std::ostream &COUT, AForm &obj)
{
	COUT << "AForm " << obj.getName();
	if (obj.is_Signed())
		COUT << " is " << GREEN << "signed" << RESET;
	else
		COUT << " is " << RED << "not signed" << RESET;

	COUT << ". [grade to sign : " << obj.getGradeToSign() << ", grade to execute : " << obj.getGradeToExec() << "]";
	return COUT;
}

void AForm::beSigned(Bureaucrat &bq)
{
	if (bq.getGrade() < 1)
		throw GradeTooHighException();
	if (bq.getGrade() > 150)
		throw GradeTooLowException();

	if (bq.getGrade() <= this->getGradeToSign())
		this->_isSigned = true;
}
