/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:44:01 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/12 12:33:32 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj): AForm("ShrubberyCreationForm", obj.getGradeToSign(), obj.getGradeToExec())
{
	this->_target = obj._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	if (&obj != this)
		return *this;
	this->_target = obj._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void drawTree(std::fstream &obj)
{
	obj << "               ,@@@@@@@," << std::endl;
	obj << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	obj << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	obj << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88" << std::endl;
	obj << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888" << std::endl;
	obj << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88" << std::endl;
	obj << "   `&%\\ ` /%&'    |.|        \\ '|8" << std::endl;
	obj << "       |o|        | |         | |" << std::endl;
	obj << "       |.|        | |         | |" << std::endl;
	obj << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::fstream fileObj;

	if (this->is_Signed() && executor.getGrade() <= this->getGradeToExec())
	{
		fileObj.open((_target + "_shrubbery").c_str(), std::ios::out);
		if (fileObj.is_open())
			drawTree(fileObj);
		fileObj.close();
	}
	else
		throw GradeTooLowException();

}
