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
	string a, b;
	while (cin>>a>>b)
	{
		vi r(a.size() + b.size(), 0);
		for (int i = a.size()-1;i>=0; --i)
		{
			for (int j = b.size()-1 ; j >= 0; --j)
			{
				r[j+i+1] += (a[i] - '0')*(b[j] - '0');
			}
		}
		for (int i = r.size()-1; i >=0; --i)
		{
			if (r[i] >= 10)
			{
				r[i - 1] += r[i] / 10;
				r[i] %= 10;
			}
		}
		if (all_of(r.begin(), r.end(), [](int a)->bool {return a == 0; }))
			cout << "0";
		else
		{
			bool start = false;
			for (int i = 0, s = r.size(); i < s; ++i)
			{
				if (r[i] != 0)
					start = true;
				if (start)
					cout << r[i];
			}
		}
		cout << "\n";
	}
	return 0;
}