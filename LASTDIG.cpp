/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int t;
	int a, res;
	unsigned long long b;

	cin >> t;

	while(t--)
	{
		cin >> a >> b;

		res = 1;

		while(b)
		{
			if(b & 1)
				res = (res * a) % 10;

			b >>= 1;
			a = (a * a) % 10;
		}

		cout << res << endl;
	}

	return 0;
}