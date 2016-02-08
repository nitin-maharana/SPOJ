/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	int t;
	long long int term3, lastTerm3, sum;
	long long int n, d, a;

	cin >> t;

	while(t--)
	{
		cin >> term3 >> lastTerm3 >> sum;

		n = (2ll * sum) / (term3 + lastTerm3);

		d = (lastTerm3 - term3) / (n - 5ll);

		a = term3 - (2ll * d);

		cout << n << endl;

		for(long long int i = 0ull; i < n; i++)
		{
			cout << a << " ";
			a = a + d;
		}

		cout << endl;
	}
}