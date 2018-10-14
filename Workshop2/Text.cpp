
#include <iostream>
#include "Text.h"


using namespace std;

namespace sict {

	
	Text::Text() {

		text_ = nullptr;
		noOfLines_ = 0;
		noOfRecords_ = 0;

	}


	Text::Text(const char* file) {

		noOfLines_ = getRecords(file);
		
		noOfRecords_ = noOfLines_;

		if (noOfLines_ > 0) {

			text_ = new string[noOfLines_];

			getRecords(file, true);

		}
		else {

			*this = Text();

		}


	}

	//Copy Constructor
	Text::Text(const Text& text) {

		Setter(text);

	}

	//Move Constructor//
	Text::Text(Text&& text) {

		*this = move(text);

	}

	//Copy Assignment Opeeator
	Text& Text::operator=(const Text &source) {

		Setter(source);

		return *this;

	}

	//Move Assignment operator/
	Text& Text::operator=(Text &&source) {

		if (&source != this) {

			if (text_ != nullptr) {

				delete[] text_;

			}

			text_ = source.text_;
			noOfLines_ = source.noOfLines_;
			noOfRecords_ = source.noOfRecords_;

			source.text_ = nullptr;
			source.noOfLines_ = 0;
			source.noOfRecords_ = 0;

		}

		return *this;

	}

	//
	size_t Text::size() const {

		return noOfRecords_;

	}

	//Destructor
	Text::~Text() {

		delete[] text_;

		text_ = nullptr;

	}

	int Text::getRecords(const string name, bool check) {

		int size = 0;

		ifstream file(name);

		string foo;

		if (file.is_open()) {

			for (size_t i = 0; getline(file, foo); i++) {

				size++;

				if (check) {

					text_[i] = foo;

				}

			}
		}

		file.close();

		return size;

	}

	void Text::Setter(const Text& Object) {

		if (text_ != nullptr) {

			delete[] text_;

		}

		text_ = nullptr;

		if (Object.size() > 0) {

			text_ = new string[Object.size()];

			noOfLines_ = Object.size();

			noOfRecords_ = Object.size();
		
			for (unsigned i = 0; i < Object.size(); i++) {

				text_[i] = Object.text_[i];

			}
		}
	}
}
