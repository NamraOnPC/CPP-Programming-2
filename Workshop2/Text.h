//Name :- Namra Fanse
//Student No :- 112219175
//Student Email :- nrfanse@myseneca.ca
//Lab 2 

#ifndef TEXT_H
#define TEXT_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

namespace sict {

	class Text {

	private:

		string * text_;
		int noOfLines_;
		size_t noOfRecords_;

	public:

		Text();

		Text(const char* file);

		Text(const Text& text); //copy constructor 

		Text(Text&& text); // move constructor

		Text& operator=(const Text& source); //a copy assignment operator

		Text& operator=(Text&& source); // a move assignment operator

		size_t size() const; //a member function named size_t size() const that returns the number of records of text data

		~Text(); //destructor 

		int getRecords(const string name, bool check = false);

		void Setter(const Text& Object);

	};

}















#endif
