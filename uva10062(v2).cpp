#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include<sstream>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
typedef pair<int, string> pid;

#define REP(i, a, b) \
for(int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define TRvi(c, it) \
for(vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for(vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for(msi::iterator it = (c).begin(); it != (c).end(); it++)

#define pb emplace_back


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	bool f = false;
	while (getline(cin,a))
	{
		if (f)
			cout << "\n";
		map<int, int>m;
		for (auto i : a)
		{
			if (m.find((int)i) == m.end())
				m[(int)i] = 1;
			else
				m[(int)i] ++;
		}
		vector<ii> c;
		for (auto i = m.rbegin(); i != m.rend(); i++)
			c.pb(*i);
		sort(c.begin(), c.end(), [](ii a, ii b)->bool {return(a.second==b.second)?a.first>b.first: a.second < b.second; });
		for (auto i : c)
			cout << i.first << " " << i.second << "\n";
		f = true;
	}
	return 0;
}