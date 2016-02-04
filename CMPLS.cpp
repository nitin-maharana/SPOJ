/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <string>

using namespace std;

void findSequence(int input[], int s, int c)
{
	if(s == 1)
	{
		for(int i = s; i < s+c; i++)
			input[i] = input[0];

		return;
	}

	int diff[110];

	for(int i = 0; i < s-1; i++)
		diff[i] = input[i+1] - input[i];

	int number = diff[0];
	bool flag = true;

	for(int i = 0; i < s-1; i++)
	{
		if(diff[i] != number)
		{
			flag = false;
			break;
		}
	}

	if(flag)
	{
		for(int i = s-1; i < s+c-1; i++)
			diff[i] = diff[0];
	}
	else
	{
		findSequence(diff, s-1, c);
	}

	for(int i = s; i < s+c; i++)
		input[i] = input[i-1] + diff[i-1];

	return;
}

int main(void)
{
	int t, s, c;
	int input[110];

	cin >> t;

	while(t--)
	{
		cin >> s >> c;

		for(int i = 0; i < s; i++)
			cin >> input[i];

		findSequence(input, s, c);

		for(int i = s; i < s+c; i++)
			cout << input[i] << " ";

		cout << endl;
	}

	return 0;
}