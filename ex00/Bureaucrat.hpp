#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "GradeTooHighException.hpp"
#include <iostream>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int range);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	virtual ~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;
	void incrementBureaucrat();
	void decrementBureaucrat();
};

#endif
