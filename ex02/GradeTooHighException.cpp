/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:03:13 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/06 18:32:49 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

GradeTooHighException::GradeTooHighException(){}
GradeTooHighException::~GradeTooHighException() throw() {}

const char * GradeTooHighException::what () const throw ()
{
	return "Grade too high exception";
}
