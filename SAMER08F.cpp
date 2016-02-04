/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	while(n)
	{
		cout << ((n * (n+1) * (2*n+1)) / 6) << endl; 

		cin >> n;
	}

	return 0;

}