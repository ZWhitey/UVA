#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a;
	while (a-->0)
	{
		int n;
		cin >> n;
		vector<int>x(n);
		for (int i = 0; i < n; ++i)
			cin >> x[i];	
		cout << (*max_element(x.begin(),x.end()) - *min_element(x.begin(),x.end()))*2 << endl;
	}
	return 0;
}