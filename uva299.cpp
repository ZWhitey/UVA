#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a;
	cin >> a;
	while (a-- > 0)
	{
		int l;
		cin >> l;
		vector<int>c(l);
		for (int i = 0; i < l; ++i)
			cin >> c[i];
		int sw = 0;
		for (int i = 0; i < l - 1; ++i)
		{
			for (int j = i + 1; j < l; ++j)
			{
				if (c[i] > c[j])
				{
					int t = c[i];
					c[i] = c[j];
					c[j] = t;
					sw++;
				}
			}
		}
		cout << "Optimal train swapping takes " << sw << " swaps." << endl;
	}
	return 0;
}