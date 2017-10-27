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
#include <sstream>
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

bool cp(pid a, pid b)
{
	return a.first < b.first;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin >> a;
	cin.ignore();
	while (a-->0)
	{
		vector<string> n(2);
		while(getline(cin,n[0])&&n[0]=="");
		getline(cin, n[1]);
		vector<pid>pn;
		stringstream ss,ss1;
		ss << n[0];
		ss1 << n[1];
		int it;
		string st;
		while (ss >> it)
		{
			ss1 >> st;
			pn.pb(pid(it,st));
		}
		sort(pn.begin(), pn.end(), cp);
		for (auto i : pn)
			cout << i.second << "\n";
		if(a!=0)cout << "\n";
	}

	return 0;
}
