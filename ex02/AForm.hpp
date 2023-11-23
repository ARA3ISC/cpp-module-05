#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Bureaucrat.hpp"

#define RED "\033[31m"
#define GREEN "\033[92m"
#define RESET "\033[0m"
#define CYAN "\033[96m"

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExec;

public:
	AForm(std::string name, int gradeToSign, int _gradeToExec);
	AForm(const AForm &obj);
	AForm &operator=(const AForm &obj);
	virtual ~AForm();

	const std::string &getName() const;
	bool is_Signed() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	void beSigned(Bureaucrat &bq);

	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &COUT, AForm &obj);

#endif
