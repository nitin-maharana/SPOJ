/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <string>
#include <map>

using namespace std;

string input;
map<int, unsigned long long> memory;
map<int, unsigned long long>::iterator it;
int len;

unsigned long long findNumDecoding(int index)
{
	if(index == len || index == len-1)
		return 1ull;

	it = memory.find(index);

	if(it != memory.end())
		return (it->second);

	unsigned long long result;

	if(input[index] > '2' || (input[index] == '2' && input[index+1] > '6') || (index+2 < len && input[index+2] == '0'))
		result = findNumDecoding(index+1);
	else if(input[index+1] == '0')
		result = findNumDecoding(index+2);
	else
		result = (findNumDecoding(index+1) + findNumDecoding(index+2));

	memory.insert(make_pair(index, result));

	return result;
}

int main(void)
{
	cin >> input;

	while(input != "0")
	{
		len = input.length();

		cout << findNumDecoding(0) << endl;

		input.clear();
		memory.clear();

		cin >> input;
	}

	return 0;
}