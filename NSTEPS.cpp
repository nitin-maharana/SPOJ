/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */

 #include <iostream>

 using namespace std;

 int main(void)
 {
 	int n, x, y;

 	cin >> n;

 	while(n--)
 	{
 		cin >> x >> y;

 		if(x == y || x == y+2)
 		{
 			if(x % 2 == 0 && y % 2 == 0)
 				cout << (x+y) << endl;
 			else
 				cout << (x+y-1) << endl;
 		}
 		else
 			cout << "No Number" << endl;
 	}

 	return 0;
 }