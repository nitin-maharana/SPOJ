/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

#include <iostream>

using namespace std;

void findWinner(int *godzilla, int *mechagodzilla, int ng, int nm)
{
	int maxGodzilla, maxMechaGodzilla;

	maxGodzilla = -1;

	for(int i = 0; i < ng; i++)
		if(godzilla[i] > maxGodzilla)
			maxGodzilla = godzilla[i];

	maxMechaGodzilla = -1;

	for(int i = 0; i < nm; i++)
		if(mechagodzilla[i] > maxMechaGodzilla)
			maxMechaGodzilla = mechagodzilla[i];

	if(maxGodzilla < maxMechaGodzilla)
		cout << "MechaGodzilla" << endl;
	else
		cout << "Godzilla" << endl;
}

int main(void)
{
	int t;
	int ng, nm;
	int *godzilla, *mechagodzilla;

	cin >> t;

	while(t--)
	{
		cin >> ng >> nm;

		godzilla = new int[ng];
		mechagodzilla = new int[nm];

		for(int i = 0; i < ng; i++)
			cin >> godzilla[i];

		for(int i = 0; i < nm; i++)
			cin >> mechagodzilla[i];

		findWinner(godzilla, mechagodzilla, ng, nm);

		delete[] godzilla;
		delete[] mechagodzilla;
	}

	return 0;
}