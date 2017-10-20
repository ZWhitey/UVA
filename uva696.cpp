#include<iostream>
#include<algorithm>
using namespace std;

int k(int a, int b)
{
	if (a < b)
		swap(a, b);
	if (b > 2)
		return (a*b % 2 == 0) ? (a*b) / 2 : (a*b) / 2 + 1;
	else if (b == 2)
		if (a % 4 == 0)
			return a;
		else
			return (a % 4 > 1) ? int(a / 4) * 4 + 4 : int(a / 4) * 4 + 2;
	else if (b == 1)
		return a;
	else if (b == 0)
		return 0;
}

int main()
{
	int m, n;
	while (cin>>m>>n&&(m+n)!=0)
	{
		cout << k(m, n) << " knights may be placed on a " << m << " row " << n << " column board." << endl;
	}
	
	return 0;
}