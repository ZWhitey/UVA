#include<iostream>
#include<cmath>
using namespace std;
bool checkprime(int a)
{
	int top = sqrt(a);
	for (int i = 2; i <= top; ++i)
		if (a%i == 0)
			return false;
	return true;
}
int main()
{
	int n;
	while (cin>>n&&n!=0)
	{
		int top, bot;
		if (checkprime(n))
		{
			cout << "0" << endl;
			continue;
		}
		for(int i=n+1;;++i)
		{
			if (checkprime(i))
			{
				top = i;
				break;
			}
		}
		for (int i = n-1;; --i)
		{
			if (checkprime(i))
			{
				bot = i;
				break;
			}
		}
		cout << top - bot << endl;
	}
	return 0;
}