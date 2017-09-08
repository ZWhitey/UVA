#include<iostream>
using namespace std;
int f91(int a)
{
	if (a > 100)
		return a - 10;
	else
		return f91(f91(a + 11));
}

int main()
{
	int a;
	while (cin >> a&&a != 0)
	{
		cout << "f91(" << a << ") = " << f91(a)<< endl;
	}
	return 0;
}