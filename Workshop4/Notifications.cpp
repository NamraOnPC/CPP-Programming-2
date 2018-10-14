
#include <string>
#include "Notifications.h"
using namespace std;

namespace sict {

	Notifications::Notifications() : _message(nullptr) , _counter(0) {}

	Notifications::Notifications(std::ifstream& istr) : _message(nullptr), _counter(0) {

		std::string data;

		while (getline(istr, data)) {

			_counter++;

		}

		istr.clear();

		istr.seekg(0, std::ios::beg);

		if (_message == nullptr) {

			_message = new Message[_counter];

		}

		for (int x = 0; x < _counter; x++) {

			_message[x] = Message(istr, MAX_MSG_SIZE);

		}


	}

	Notifications::Notifications(Notifications&& org) {

		*this = move(org);

	}

	Notifications&& Notifications::operator=(Notifications&& org) {

		if (&org != this) {

			delete[] _message;

			_message = org._message;
			_counter = org._counter;

			org._message = nullptr;
			org._counter = 0;

		}

		return move(*this);

	}

	Notifications::~Notifications() {

		delete[] _message;

		_message = nullptr;

	}

	void Notifications::display(std::ostream& ostr) const {

		for (int i = 0; i < _counter; i++) {
			
			_message[i].display(ostr);

		}

	}

}
