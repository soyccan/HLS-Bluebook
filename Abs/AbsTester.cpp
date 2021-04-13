
#include <iostream>
#include "Top.h"

using namespace std;

int main(int argc, char *argv[])
{
	ABSTYPE i, out;
	int j;

	cout << ">> Start test!" << endl;

	for(i = -128; i < 100; i+=16) {
		for(j = 0; j < 3; j++) {
			out = top(i, j);

			cout << "(" << i << ", " << j << ") -> " << out << endl;
		}
	}
	cout << "------------------------" << endl;
	cout << ">> Test passed!" << endl;
	cout << "------------------------" << endl;
	return 0;
}
