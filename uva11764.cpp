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
	int a;
	cin >> a;
	for (int i = 1; i <= a; ++i)
	{
		int t;
		cin >> t;
		vi N(t);
		for (int i = 0; i < t; ++i)
			cin >> N[i];
		int h = 0, l = 0;
		for (int i = 0; i < t - 1; ++i)
		{
			if (N[i] > N[i + 1])
				l++;
			if (N[i] < N[i + 1])
				h++;
		}
		cout << "Case " << i << ": " << h << " " << l << "\n";
	}
	return 0;
}