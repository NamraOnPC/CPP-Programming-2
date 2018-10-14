
#ifndef _NOTIFICATIONS_H
#define _NOTIFICATIONS_H
#include "Message.h"
#include <fstream>
#include <iostream>
using namespace std;

namespace sict {

	const int MAX_MSG_SIZE = 10;

	const char DELIMITER = '\n';

	class Notifications {

	private:

		Message * _message;

		int _counter;

	public:

		Notifications();

		Notifications(std::ifstream&);

	//	Notifications(Notifications&) = delete;

		Notifications(Notifications&&);

	//	Notifications& operator=(Notifications&) = delete;

		Notifications&& operator=(Notifications&&);

		~Notifications();

		void display(std::ostream& ostr) const;


	};


}


#endif // !_NOTIFICATIONS_H

