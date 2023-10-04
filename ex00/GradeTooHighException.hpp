#ifndef GRADETOHIGHTEXCEPTION_HPP
#define GRADETOHIGHTEXCEPTION_HPP

#include <iostream>

class GradeTooHighException : public std::exception
{
	private:
		/* data */
	public:
		GradeTooHighException();
		~GradeTooHighException();
		const char * what () const throw ();

};

#endif
