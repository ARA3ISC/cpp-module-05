/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:01:36 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/04 19:09:28 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unknown")
{
	this->_grade = 0;
	std::cout << "Constructing Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int range) : _name(name)
{
	this->_grade = range;
	std::cout << "Constructing Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name)
{
	this->_grade = obj._grade;
	std::cout << "Copy constructor called" << std::endl;
}

/*
A& operator=(const A& right)
{
    if (this == &right) return *this;

    // manually call the destructor of the old left-side object
    // (`this`) in the assignment operation to clean it up
    this->~A();
    // use "placement new" syntax to copy-construct a new `A`
    // object from `right` into left (at address `this`)
    new (this) A(right);
    return *this;
}
*/

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		this->_grade = obj._grade;
	}
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
	this->_grade--;
}

void Bureaucrat::decrementBureaucrat()
{
	this->_grade++;
}
