#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getmax(int a, int b, int c)
{
	return max(max(a, b),c);
}
int main()
{
	int n1, n2,t=1;
	while (cin>>n1>>n2&&(n1+n2)!=0)
	{
		vector<int>t1(n1);
		vector<int>t2(n2);
		for (int i = 0; i < n1; ++i)
			cin >> t1[i];
		for (int i = 0; i < n2; ++i)
			cin >> t2[i];
		vector<vector<int>>m(n1 + 1, vector<int>(n2 + 1, 0));
		for (int i = 1; i < n1 + 1; ++i)
		{
			for (int j = 1; j < n2 + 1; ++j)
			{
				if (t1[i - 1] == t2[j - 1])
					m[i][j] = m[i - 1][j - 1] + 1;
				else
					m[i][j] = getmax(m[i - 1][j - 1], m[i - 1][j], m[i][j - 1]);
			}
		}
		cout << "Twin Towers #" << t++ << endl;
		cout << "Number of Tiles : " << m.back().back() << endl << endl;
	}
	return 0;
}