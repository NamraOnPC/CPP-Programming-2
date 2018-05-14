//Name :- Namra Fanse
// Student ID :- 112219175
//Student Email :- nrfanse@myseneca.ca
// Lab 1 OOP345


#ifndef CSTRING_H
#define CSTRING_H


#include <iostream>

namespace w1 {

	const int MAX = 6;

	class CString {

	private:

		char string_[MAX + 1];

	public:

		CString(const char *string);

		void  display(std::ostream &ostream) const;

	};

	std::ostream &operator<<(std::ostream &ostream, const CString &cstring);

}



#endif //!CSTRING_H