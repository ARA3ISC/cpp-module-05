/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:01:36 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 14:57:07 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unknown")
{
	this->_grade = 0;
	std::cout << "Constructing Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();

	this->_grade = grade;
	std::cout << "Constructing Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name)
{
	this->_grade = obj._grade;
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
		this->_grade = obj._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructing Bureaucrat" << std::endl;
}

const std::string &Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementBureaucrat()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementBureaucrat()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::ostream &operator<<(std::ostream &COUT, Bureaucrat &obj)
{
	COUT << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return COUT;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.is_Signed())
		std::cout << getName() << GREEN << " signed " << form.getName() << "." << RESET << std::endl;
	else
		std::cout << getName() << RED << " couldn't sign " << form.getName() << RESET << " because grade is too low to the required." << std::endl;
}
