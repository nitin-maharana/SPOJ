/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

//General case - For big numbers
//Even if the number crosses the range of datatype, this solution works.

#include <iostream>
#include <string>

using namespace std;

char findSum(char n1, char n2, int &carry)
{
	int result;

	result = (n1-'0') + (n2-'0') + carry;

	carry = result / 10;

	result = result % 10;

	return (char)(result+'0');
}

int processNumber(string &num, int len)
{
	while(len > 0)
	{
		if(num[len-1] == '0')
			len--;
		else
			break;
	}

	return len;
}

int main(void)
{
	int t;
	string num1, num2, result;
	int len1, len2, len, carry;
	
	cin >> t;

	while(t--)
	{
		cin >> num1 >> num2;

		result = "";
		carry = 0;
		len1 = num1.length();
		len2 = num2.length();

		len1 = processNumber(num1, len1);
		len2 = processNumber(num2, len2);

		int i;

		for(i = 0; i < len1 && i < len2; i++)
			result += findSum(num1[i], num2[i], carry);

		while(i < len1)
		{
			result += findSum(num1[i], '0', carry);
			i++;
		}

		while(i < len2)
		{
			result += findSum('0', num2[i], carry);
			i++;
		}

		if(carry)
			result += '1';

		len = result.length();

		for(i = 0; i < len; i++)
			if(result[i] != '0')
				break;

		while(i < len)
			cout << result[i++];

		cout << endl;
	}

	return 0;
}