/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

//Linked list version FCTRL2
//It can even calculate the factorial of more than 100

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int t, n, carry, temp;
	list<int> result;

	cin >> t;

	while(t--)
	{
		cin >> n;

		result.clear();

		result.push_back(1);

		for(int i = 2; i <= n; i++)
		{
			carry = 0;

			for(list<int>::iterator it = result.begin(); it != result.end(); it++)
			{
				temp = (i * (*it)) + carry;
				*it = temp % 10;
				carry = temp / 10;
			}

			while(carry)
			{
				result.push_back(carry % 10);
				carry /= 10;
			}
		}

		for(list<int>::reverse_iterator rit = result.rbegin(); rit != result.rend(); rit++)
			cout << *rit;

		cout << endl;
	}

	return 0;
}