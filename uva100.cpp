#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
map < int,  int>table;
int tn(int n)
{
	int c=1;
	vector<long long int>num;
	num.push_back(n);
	while (n != 1)
	{
		if (table.find(n) == table.end())
		{
			if (n % 2 == 1)
				n = n * 3 + 1;
			else
				n /= 2;
			num.push_back(n);
			c++;
		}
		else
		{
			c= c + table[n]-1;
			break;
		}
	}
	int t = c;
	for (int i = 0; i < num.size(); i++, t--)
			table[num[i]] = t;

	return c;

}

int main()
{
	int a, b;
	while (cin>>a>>b)
	{
		vector<int> list;
		int big = max(a, b);
		int lit = min(a, b);
		for (int i = lit; i <=big; i++)
			list.push_back(tn(i));	
		cout << a << " " << b << " " << *max_element(list.begin(), list.end()) << endl;
	}
	return 0;
}