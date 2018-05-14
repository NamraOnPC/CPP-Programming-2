
#include "Process.h"
#include "CString.h"
#include <iostream>
using namespace std;

	void process(const char *string) {

		w1::CString cstring(string);

		cout << cstring << endl;

	}
