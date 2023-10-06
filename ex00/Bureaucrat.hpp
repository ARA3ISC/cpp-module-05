#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"
# include <iostream>

# define RED "\033[31m"
# define GREEN "\033[92m"
# define RESET "\033[0m"
# define CYAN "\033[96m"

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

std::ostream& operator<<(std::ostream& COUT, Bureaucrat& obj)
{
	COUT << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return COUT;
}

#endif
