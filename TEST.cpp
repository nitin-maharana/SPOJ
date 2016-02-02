/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
using namespace std;

int main() {
	int input;

	do{
		cin >> input;
		if(input != 42)
			cout << input << endl;
	}while(input != 42);

	return 0;
}