/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	long long int t, n, sum;
	long long int input;

	cin >> t;

	while(t--)
	{
		cin >> n;

		sum = 0ll;

		for(long long i = 0ll; i < n; i++)
		{
			cin >> input;
			sum = (sum + input) % n;
		}

		if(sum)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}