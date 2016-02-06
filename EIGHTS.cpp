/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

//One simple solution: 192+(k-1)*250;

#include <iostream>

using namespace std;

int main(void)
{
	int t;
	unsigned long long k;

	cin >> t;

	while(t--)
	{
		cin >> k;

		if(k % 4ull)
		{
			if(k / 4ull)
				cout << (k / 4ull);

			k = k % 4ull;

			if(k == 1ull)
				cout << "192" << endl;
			if(k == 2ull)
				cout << "442" << endl;
			if(k == 3ull)
				cout << "692" << endl;
		}
		else
		{
			k = k / 4ull;
			k--;

			if(k)
				cout << k;

			cout << "942" << endl;
		}
	}

	return 0;
}
