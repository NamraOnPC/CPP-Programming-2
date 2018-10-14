
#ifndef _MESSAGE_H
#define _MESSAGE_H
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

namespace sict {

	class Message {

	private:

		std::string _user;

		std::string _reply;

		std::string _tweets;

	public:

		Message();

		bool empty() const;

		Message(std::ifstream& in, char c);

		void display(std::ostream& ostr) const;


	};

}

#endif // !_MESSAGE_H
