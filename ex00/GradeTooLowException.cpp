/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:06:06 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/06 18:32:59 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException(){}
GradeTooLowException::~GradeTooLowException() throw(){}

const char * GradeTooLowException::what () const throw ()
{
	return "Grade too low exception";

}

