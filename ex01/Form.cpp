/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:54:42 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 14:55:04 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* orthodox canonical Form */

Form::Form(): _name("uknown"), _isSigned(false), _gradeToSign(0), _gradeToExec(0) {}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();

	this->_isSigned = false;
	this->_gradeToSign = gradeToSign;
	this->_gradeToExec = gradeToExec;
	std::cout << "Constructing Form" << std::endl;
}

Form::Form(const Form &obj) : _name(obj._name)
{
	this->_isSigned = obj._isSigned;
	this->_gradeToSign = obj._gradeToSign;
	this->_gradeToExec = obj._gradeToExec;
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
	if (this == &obj)
		return *this;
	this->_isSigned = obj._isSigned;
	this->_gradeToSign = obj._gradeToSign;
	this->_gradeToExec = obj._gradeToExec;
	std::cout << "Form copy assignment operator called" << std::endl;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

/* getters */

const std::string &Form::getName() const
{
	return this->_name;
}

bool Form::is_Signed() const
{
	return _isSigned;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGradeToExec() const
{
	return this->_gradeToExec;
}

std::ostream &operator<<(std::ostream &COUT, Form &obj)
{
	COUT << "Form " << obj.getName();
	if (obj.is_Signed())
		COUT << " is " << GREEN << "signed" << RESET;
	else
		COUT << " is " << RED << "not signed" << RESET;

	COUT << ". [grade to sign : " << obj.getGradeToSign() << ", grade to execute : " << obj.getGradeToExec() << "]";
	return COUT;
}

void Form::beSigned(Bureaucrat &bq)
{
	if (bq.getGrade() < 1)
		throw GradeTooHighException();
	if (bq.getGrade() > 150)
		throw GradeTooLowException();

	if (bq.getGrade() <= this->getGradeToSign())
		this->_isSigned = true;
}
