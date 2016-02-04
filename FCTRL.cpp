/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	long t;
	unsigned long long number, count;

	cin >> t;

	while(t--)
	{
		cin >> number;
		count = 0ull;
		
		while(number)
		{
			count += (number / 5ull);
			number /= 5ull;
		}

		cout << count << endl;
	}

	return 0;
}