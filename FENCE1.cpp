/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void)
{
	int l;

	cin >> l;

	while(l)
	{
		printf("%.2f\n", ((float)l * l / M_PI / 2.0f));

		cin >> l;
	}

	return 0;
}