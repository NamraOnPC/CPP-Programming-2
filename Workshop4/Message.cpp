
#include <sstream>
#include "Message.h"
using namespace std;

namespace sict {

	Message::Message() {}

	Message::Message(std::ifstream& in, char c) {

		string data , foo;

		getline(in, data, c);

		istringstream istr(data);

		if (_user.empty()) {

			istr >> _user;

			if ((int)_user.find('@') > 0) {

				_user.clear();

			}

		}

		if (_reply.empty()) {

			istr >> _reply;

			if ((int)_reply.find('@') < 0) {

				istr.seekg(0, ios::beg);

				istr >> foo;

				getline(istr, _tweets);

				_reply.clear();

			}

		}

		if (_tweets.empty()) {

			getline(istr, _tweets);

		}

		_reply.erase(0, 1);
		_tweets.erase(0,1);
		istr.clear();

	}
	

	void Message::display(std::ostream& ostr) const {

		if (_tweets != "") {

			ostr << "Message" << endl;

			ostr << "\tUser\t:\t" << _user << endl;

			if (!_reply.empty()) {

				ostr << "\tReply\t:\t" << _reply << endl;

			}

			ostr << "\tTweet\t:\t" << _tweets << endl;

		}

	}

	bool Message::empty() const {

		return _user.empty() || _tweets.empty();

	}

}
