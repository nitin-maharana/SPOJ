/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	unsigned long long input;

	cin >> input;

	if(input & (input-1))
		cout << "NIE" << endl;
	else
		cout << "TAK" << endl;

	return 0;
}