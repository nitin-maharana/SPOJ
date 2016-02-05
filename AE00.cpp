/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	int n;
	long result;

	cin >> n;

	result = 0l;

	result += n;

	for(int i = 2; i <= n/2; i++)
	{
		if(i*i <= n)
			result += (i-1);
		else
		{
			for(int j = 2; i*j <= n; j++)
				result++;
		}
	}

	cout << result << endl;

	return 0;
}