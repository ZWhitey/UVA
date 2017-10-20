#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a;
	cin >> a;
	while (a-->0)
	{
		int n;
		cin >> n;
		int nt[10] = {};
		for (int i = 1; i <= n; ++i)
		{
			int n = i;
			while (n > 0)
			{
				nt[n % 10]++;
				n /= 10;
			}
		}
		cout << nt[0] << " " << nt[1] << " " <<
			nt[2] << " " << nt[3] << " " <<
			nt[4] << " " << nt[5] << " " <<
			nt[6] << " " << nt[7] << " " <<
			nt[8] << " " << nt[9] << endl;
	}
	
	return 0;
}