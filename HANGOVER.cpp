/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

int main(void)
{
	float input, memory[300];

	memory[0] = memory[1] = 0.0f;

	for(int i = 2; i < 300; i++)
		memory[i] = memory[i-1] + (1.0f/i);

	cin >> input;

	while(input != 0)
	{
		int i;

		for(i = 2; i < 300; i++)
			if(memory[i] > input)
				break;

		cout << i-1 << " card(s)" << endl;

		cin >> input;
	}

	return 0;
}