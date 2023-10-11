#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"
# include "Bureaucrat.hpp"

# define RED "\033[31m"
# define GREEN "\033[92m"
# define RESET "\033[0m"
# define CYAN "\033[96m"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		int _gradeToSign;
		int _gradeToExec;

	public:
		Form(std::string name, int gradeToSign, int _gradeToExec);
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		~Form();

		const std::string& getName() const;
		bool is_Signed() const;
		int getGradeToSign() const;
		int getGradeToExec() const;

		void beSigned(Bureaucrat& bq);

};

std::ostream& operator<<(std::ostream& COUT, Form& obj);


#endif
