/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int input[100002];

	cin >> n;

	while(n)
	{
		for(int i = 1; i <= n; i++)
			cin >> input[i];

		int j;
		for(j = 1; j <= n; j++)
			if(j != input[j] && j != input[input[j]])
				break;

		if(j == n+1)
			cout << "ambiguous" << endl;
		else
			cout << "not ambiguous" << endl;

		cin >> n;
	}

	return 0;
}