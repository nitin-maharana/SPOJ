/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

vector<unsigned long long> primelist;

void flagPrime(void)
{
	primelist.push_back(2ull);

	unsigned long long sqrtofbillion = sqrt(1000000000);
	unsigned long long peak;

	for(unsigned long long i = 3ull; i <= sqrtofbillion; i += 2ull)
	{
		bool flag = true;
		peak = sqrt(i);

		vector<unsigned long long>::iterator it;

		for(it = primelist.begin(); it != primelist.end(); it++)
		{
			if(*it > peak)
				break;
			else
			{
				if(i % *it == 0)
				{
					flag = false;
					break;
				}
			}
		}

		if(flag)
			primelist.push_back(i);
	}
}

int main(void)
{
	int t;
	unsigned long long m, n;

	flagPrime();

	cin >> t;

	for(int k = 0; k < t; k++)
	{
		if(k)
			cout << endl;

		cin >> m >> n;

		if(m < 2ull)
			m = 2ull;

		unsigned long long peak = sqrt(n) + 1ull;

		set<unsigned long long> noprime;
		noprime.clear();

		vector<unsigned long long>::iterator it;

		for(it = primelist.begin(); it != primelist.end(); it++)
		{
			if(*it >= peak)
				break;

			unsigned long long j;

			if(*it >= m)
				j = (*it) * 2ull;
			else
				j = m + ((*it - m % *it) % *it);

			for(; j <= n; j += *it)
				noprime.insert(j);
		}

		for(unsigned long long i = m; i <= n; i++)
			if(noprime.count(i) == 0)
				cout << i << endl;
	}

	return 0;
}