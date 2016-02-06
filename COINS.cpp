/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<unsigned long long, unsigned long long> memory;
map<unsigned long long, unsigned long long>::iterator it;
unsigned long long tempStorage;

unsigned long long findMax(unsigned long long coinValue)
{
	if(coinValue == 0ull)
		return 0ull;

	if(coinValue == 1ull)
		return 1ull;

	it = memory.find(coinValue);

	if(it != memory.end())
		return it->second;

	tempStorage = max(coinValue, (findMax(coinValue/2ull) + findMax(coinValue/3ull) + findMax(coinValue/4ull)));

	memory.insert(pair<unsigned long long, unsigned long long>(coinValue, tempStorage));

	return tempStorage;
}

int main(void)
{
	int t = 10;
	unsigned long long coinValue;

	while(t--)
	{
		cin >> coinValue;

		cout << findMax(coinValue) << endl;
	}

	memory.clear();

	return 0;
}