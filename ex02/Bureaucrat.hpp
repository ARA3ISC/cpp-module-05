#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"
# include "AForm.hpp"

class AForm;

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

		void signForm(AForm& form);
		void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& COUT, Bureaucrat& obj);
#endif
