#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP

#include <iostream>

class GradeTooLowException : public std::exception
{
	public:
		GradeTooLowException();
		~GradeTooLowException() throw() ;
		virtual const char * what () const throw ();

};

#endif
