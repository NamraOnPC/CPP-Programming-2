

#ifndef _GRADES_H
#define _GRADES_H
#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
#include "Letter.h"
using namespace std;

namespace sict {

	class Grades {

		int _lines;

		std::string* _studentNumber;

		double* _grades;

		public:

			Grades() : _studentNumber(nullptr) , _grades(0) , _lines(0) {}

			Grades(std::string filename);


			template<typename T>
			void displayGrades(std::ostream& ostr, T F)const {

				for (int i = 0; i < _lines ; i++) {

				//	const Letter letgrade = F(_grades[i]);

				//	char* agrade = convertEnumToString<Letter>(letgrade);



					ostr << _studentNumber[i] << " ";

					ostr << _grades[i] << " ";

					ostr << F(_grades[i]) << "\n";



				}

			}

	};
}


#endif // !_GRADES_H
