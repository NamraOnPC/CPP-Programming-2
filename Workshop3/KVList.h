
#ifndef _KVLIST_H
#define _KVLIST_H

template<typename K, typename V, int N>
class KVList {

	K _Key[N];

	V _Value[N];

	int _noOfArrays;

public:

	KVList() {

		_noOfArrays = 0;

	};

	size_t size()const {

		return _noOfArrays;

	};

	const K& key(int i) const {

		return _Key[i];

	};

	const V& value(int i) const {

		return _Value[i];

	};

	KVList& add(const K& key, const V& value) {

		if (_noOfArrays < N) {

			_Key[_noOfArrays] = key;

			_Value[_noOfArrays] = value;

			_noOfArrays++;

		}

		return *this;

	}

	int find(const K& key) const {

		int index;

		for (int i = 0; i < _noOfArrays; i++) {

			if (_Key[i] == key) {

				index = i;

			}

		}

		return index;

	}

	KVList& replace(int i, const K& key, const V& value) {

		if (i > 0 && i < _noOfArrays) {

			_Key[i] = key;

			_Value[i] = value;

		}

		return *this;
	}

};


#endif // !_KVLIST_H
