/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <string>

using namespace std;

long processLeadingZeros(string &input, long len)
{
	long nonZeroIndex = 0l;

	for(long i = 0; i < len; i++)
	{
		if(input[i] != '0')
		{
			nonZeroIndex = i;
			break;
		}	
	}

	if(nonZeroIndex != 0l)
	{
		long i = 0l;

		while(nonZeroIndex < len)
			input[i++] = input[nonZeroIndex++];

		len = i;
	}

	return len;
}

bool checkForAllNine(string &input, long len)
{
	bool flag = true;

	for(long i = 0l; i < len; i++)
	{
		if(input[i] != '9')
		{
			flag = false;
			break;
		}
	}

	return flag;
}

bool checkIfGreaterAfterMakingPallindrome(string &input, long len)
{
	bool flag = false;

	for(long i = 0l; i < len / 2l; i++)
	{
		if(input[i] > input[len-i-1l])
			flag = true;
		else if(input[i] < input[len-i-1l])
			flag = false;

		input[len-i-1l] = input[i];
	}

	return flag;
}

int main(void)
{
	int t;
	long l, h, len;
	string input;
	bool flag;

	cin >> t;

	while(t--)
	{
		cin >> input;

		len = input.length();

		len = processLeadingZeros(input, len);

		flag = checkForAllNine(input, len);

		if(flag)
		{
			cout << "1";

			for(long i = 0l; i < len-1l; i++)
				cout << "0";
			
			cout << "1" << endl;
			continue;
		}

		if(len == 1l)
		{	
			input[0]++;
			cout << input[0] << endl;
			continue;
		}

		flag = checkIfGreaterAfterMakingPallindrome(input, len);

		if(!flag)
		{
			l = (len - 1l) / 2l;
			h = len / 2l;

			while(l >= 0 && h < len)
			{
				if(input[l] == '9')
					input[l] = input[h] = '0';
				else
				{
					input[l] += 1;
					input[h] = input[l];
					break;
				}

				l--;
				h++;
			}
		}

		for(l = 0l; l < len; l++)
			cout << input[l];
		
		cout << endl;
	}

	return 0;
}