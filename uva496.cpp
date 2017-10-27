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

bool cp(pid a, pid b)
{
	return a.first < b.first;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<string> n(2);
	while (getline(cin, n[0]) && n[0] != "")
	{
		getline(cin, n[1]);
		vi A, B;
		stringstream ss;
		ss << n[0];
		int it;
		while (ss >> it)
		{
			A.pb(it);
		}
		ss.clear();
		ss << n[1];
		while (ss >> it)
		{
			B.pb(it);
		}
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		auto d=unique(A.begin(), A.end());
		A.erase(d, A.end());
		d = unique(B.begin(), B.end());
		B.erase(d, B.end());
		map<int, bool>C;
		for (auto i : A)
			C[i] = true;
		for (auto i : B)
			C[i] = true;
		if (C.size() == A.size() && C.size() == B.size())
			cout << "A equals B\n";
		else if (C.size() == A.size() + B.size())
			cout << "A and B are disjoint\n";
		else if (C.size() == A.size() && C.size() != B.size())
			cout << "B is a proper subset of A\n";
		else if (C.size() == B.size() && C.size() != A.size())
			cout << "A is a proper subset of B\n";
		else
			cout << "I'm confused!\n";
			
	}

	return 0;
}