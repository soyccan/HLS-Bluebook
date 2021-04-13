#include <iostream>
#include "Top.h"

using namespace std;

int main(int argc, char *argv[])
{
	ap_uint<8> out;
	int j;

	cout << ">> Start test!" << endl;

	top(190, true, out);
	for(j = 0; j < 10; j++) {
		cout << "(" << j << ") -> " << out << endl;

		top(0, false, out);

		cout << "(" << j << ") -> " << out << endl;
	}
	cout << "------------------------" << endl;
	cout << ">> Test passed!" << endl;
	cout << "------------------------" << endl;
	return 0;
}
