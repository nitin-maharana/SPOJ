/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	int n;
	string input;
	int len;

	cin >> n;

	while(n)
	{
		cin >> input;
		len = input.length();

		for(int i = 0; i < n; i++)
		{
			int j = i;

			while(j < len)
			{
				cout << input[j];

				j = j + ((n-i)*2) - 1;

				if(j < len)
					cout << input[j];

				j = j + (i * 2) + 1;
			}
		}

		cout << endl;

		cin >> n;
	}

	return 0;
}