/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <string>

using namespace std;

bool isNumber(char *str)
{
	bool flag = true;

	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] < '0' || str[i] > '9')
		{
			flag = false;
			break;
		}
	}

	return flag;
}

int toNumber(char *str)
{
	int number;

	number = 0;

	for(int i = 0; str[i] != '\0'; i++)
		number = (number * 10) + (str[i] - '0');

	return number;
}

int main(void)
{
	int t;
	char number1[30], number2[30], sum[30];
	int n1, n2, summ;
	char plus, equal;

	cin >> t;

	while(t--)
	{
		cin >> number1 >> plus >> number2 >> equal >> sum;

		n1 = n2 = summ = -1;

		if(isNumber(number1))
			n1 = toNumber(number1);

		if(isNumber(number2))
			n2 = toNumber(number2);

		if(isNumber(sum))
			summ = toNumber(sum);

		n1 = (n1 == -1) ? (summ - n2) : n1;
		n2 = (n2 == -1) ? (summ - n1) : n2;
		summ = (summ == -1) ? (n1 + n2) : summ;

		cout << n1 << " + " << n2 << " = " << summ << endl;
	}

	return 0;
}