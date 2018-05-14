
#include <iostream>
#include "Process.h"
using namespace std;

int main(int argc, char *argv[]) {

	extern int STORED;	

	cout << "Command Line :";

	for (int i = 0; i < argc; i++){

		cout << " " << argv[i];

	}

	cout << endl;

	if (argc <= 1){

		cout << "Insufficient number of arguments ( min 1 )" << endl;

		return 1;

	}else{

		cout << "Maximum number of characters to be stored : " << STORED << endl;

		for (int i = 1; i < argc; i++){

			process(argv[i]);

		}

		return 0;
	}

}
