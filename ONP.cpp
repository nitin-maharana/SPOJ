/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
	int t;
	string input;

	cin >> t;

	while(t--)
	{
		cin >> input;

		queue<char> result;
		stack<char> operatr;

		for(int i = 0; i < input.length(); i++)
		{
			if(input[i] >= 'a' && input[i] <= 'z')
				result.push(input[i]);

			switch(input[i])
			{
				case '+':
				case '-':
				case '*':
				case '/':
				case '^': operatr.push(input[i]);
						  break;
			}

			if(input[i] == ')')
			{
				result.push(operatr.top());
				operatr.pop();
			}
		}

		while(!result.empty())
		{
			cout << result.front();
			result.pop();
		}

		cout << endl;
	}

	return 0;
}