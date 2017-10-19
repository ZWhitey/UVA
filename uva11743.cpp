#include<iostream>

using namespace std;

int root(int a)
{
	if (a < 0)
		return 0;
	else
		return 1 + ((a - 1) % 9);
}
int main()
{
	int a;
	cin >> a;
	while (a-->0)
	{
		int card[4];
		cin >> card[0] >> card[1] >> card[2] >> card[3];
		int dou=0,undou=0;
		for (int i = 0; i < 4; ++i)
		{
			dou += root((card[i] / 1000) * 2);
			dou += root((card[i] % 100 / 10) * 2);
			undou += card[i] % 1000/100;
			undou += card[i] % 10;
		}
		if ((dou + undou) % 10 != 0)
			cout << "Invalid" << endl;
		else
			cout << "Valid" << endl;
	}
	return 0;
}