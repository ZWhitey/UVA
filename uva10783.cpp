#include<iostream>
using namespace std;


int main()
{
	int times,C=1;
	cin >> times;
	while (times-->0)
	{
		int a, b;
		cin >> a >> b;
		if (a % 2 == 0)
			a++;
		if (b % 2 == 0)
			b--;
		cout <<"Case "<<C++<<": "<< ((a + b)*((b - a) / 2+1))/2 << endl;
	}
	return 0;
}