#ifndef GRADETOOHIGHTEXCEPTION_HPP
#define GRADETOOHIGHTEXCEPTION_HPP

#include <iostream>

class GradeTooHighException : public std::exception
{
	private:
		/* data */
	public:
		GradeTooHighException();
		~GradeTooHighException() throw();

		const char * what () const throw ();

};

#endif
