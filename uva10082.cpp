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
	string N = "`1234567890-=";
	string Q = "QWERTYUIOP[]\\";
	string A = "ASDFGHJKL;'";
	string Z = "ZXCVBNM,./";
	map<char, char> m;
	for (int i = 1, s = N.size(); i < s; ++i)
		m[N[i]] = N[i - 1];
	for (int i = 1, s = Q.size(); i < s; ++i)
		m[Q[i]] = Q[i - 1];
	for (int i = 1, s = A.size(); i < s; ++i)
		m[A[i]] = A[i - 1];
	for (int i = 1, s = Z.size(); i < s; ++i)
		m[Z[i]] = Z[i - 1];
	string a;
	while (getline(cin, a)&&a!="")
	{
		for (auto i : a)
		{
			if (m.find(i) == m.end())
				cout << i;
			else
				cout << m[i];
		}
		cout << "\n";
	}
	return 0;
}