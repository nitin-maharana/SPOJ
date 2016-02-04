/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int input[10001];
	long long sum, moves;

	cin >> n;

	while(n != -1)
	{
		sum = 0ll;

		for(int i = 0; i < n; i++)
		{
			cin >> input[i];
			sum += input[i];
		}

		if(sum % n == 0)
		{
			moves = 0ll;

			sum = sum / n;

			for(int i = 0; i < n; i++)
				if(input[i] < sum)
					moves += (sum - input[i]);

			cout << moves << endl;
		}
		else
			cout << -1 << endl;

		cin >> n;
	}

	return 0;
}