/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	int t;
	long long int n;

	cin >> t;

	while(t--)
	{
		cin >> n;

		cout << ((n * (n + 2ll) * (2ll * n + 1ll)) / 8ll) << endl;
	}

	return 0;
}