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

	int n, male[1001], female[1001];
	long sum;

	cin >> t;

	while(t--)
	{
		cin >> n;

		for(int i = 0; i < n; i++)
			cin >> male[i];

		for(int i = 0; i < n; i++)
			cin >> female[i];

		sort(male, male+n);
		sort(female, female+n);

		sum = 0l;

		for(int i = 0; i < n; i++)
			sum += (male[i] * female[i]);

		cout << sum << endl;
	}

	return 0;
}