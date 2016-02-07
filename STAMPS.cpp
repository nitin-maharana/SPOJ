/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int t;
	long moreStamps;
	int numFriends, result;
	long numStamps[1001];
	long sum;

	cin >> t;

	for(int s = 1; s <= t; s++)
	{
		cin >> moreStamps >> numFriends;

		for(int i = 0; i < numFriends; i++)
			cin >> numStamps[i];

		sort(numStamps, numStamps+numFriends, greater<long>());

		sum = 0l;
		
		for(result = 0; result < numFriends; result++)
		{
			sum += numStamps[result];
			if(sum >= moreStamps)
				break;
		}

		cout << "Scenario #" << s << ":" << endl;

		if(result == numFriends)
			cout << "impossible" << endl << endl;
		else
			cout << result+1 << endl << endl;
	}

	return 0;
}