//Name :- Namra Fanse
//Student No :- 112219175
//Email :- nrfanse@myseneca.ca
//LAB 5 OOP345


#ifndef _LETTER_H
#define _LETTER_H

namespace sict {

	const enum class Letter { AA , A , BB , B , CC , C , DD , D , F };
	
	template<typename Enum>
	char* convertEnumToString(const Enum& grade) {

		const char* letter;

		switch (grade) {

		case Letter::AA:  letter = "A+";
			break;

		case Letter::A: letter = "A";
			break;

		case Letter::BB: letter = "B+";
			break;

		case Letter::B: letter = "B";
			break;

		case Letter::CC: letter = "C+";
			break;

		case Letter::C: letter = "C";
			break;

		case Letter::DD: letter = "D+";
			break;

		case Letter::D: letter = "D";
			break;

		case Letter::F: letter = "F";
			break;

		default: letter = "No selection";

		}

		return const_cast<char*>(letter);

	}

}



#endif // !_LETTER_H