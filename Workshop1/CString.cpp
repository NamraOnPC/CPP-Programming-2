//Name :- Namra Fanse
// Student ID :- 112219175
//Student Email :- nrfanse@myseneca.ca
// Lab 1 OOP345


#include "CString.h"
#include <iostream>

int STORED = w1::MAX;

namespace w1 {

	CString::CString(const char *string) {

		if (string[0] == '\0'){

			string_[0] = '\0';

		}else{

			for (int i = 0; i < MAX; i++) {

				string_[i] = string[i];

			}

			string_[MAX] = '\0';

		}

	}



	void  CString::display(std::ostream &ostream) const {

			ostream << string_;

	}

	std::ostream &operator<<(std::ostream &ostream, const CString &cstring){

		static int i = 0;

		ostream << i << ": ";

		cstring.display(ostream);

		i++;

		return ostream;

	}


}