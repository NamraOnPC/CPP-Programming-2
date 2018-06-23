//Name :- Namra Fanse
//Student No :- 112219175
//Email :- nrfanse@myseneca.ca
//LAB 5 OOP345


#include "Grades.h"

namespace sict {

	Grades::Grades(string filename) {

		string line;

		ifstream file(filename);

		if (!file.is_open()) {

			throw string("*** Failed to open file " + filename + " ***");

		}

		if (file.is_open()) {

			while (getline(file, line)) {
				
				_lines++;

			}

			_grades = new double[_lines];

			_studentNumber = new string[_lines];

			file.clear();

			file.seekg(0 , std::ios::beg);

			for (int i = 0; i < _lines; i++) {

				file >> _studentNumber[i];

				file.ignore(1, ' ');

				file >> _grades[i];

				file.ignore(1, '\n');


			}

			file.close();

		}

	}



}