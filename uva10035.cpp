#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string a, b;
	while (cin>>a>>b)
	{
		if (a == "0"&&b == "0")
			break;
		if (a.size() > b.size())
		{
			string t;
			for (int i = 0; i < a.size() - b.size(); i++)
				t += '0';
			b = t + b;
		}
		else
		{
			string t;
			for (int i = 0; i < b.size() - a.size(); i++)
				t += '0';
			a = t + a;
		}
		int carry = 0;
		int c = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if ((int)a[a.size() - i - 1] + (int)b[b.size() - i - 1] - 2 * (int)'0' + c>9)
			{
				carry++;
				c = 1;
			}
			else
			{
				c = 0;
			}
		}
		if (carry == 0)
			cout << "No carry operation." << endl;
		else if(carry==1)
			cout << "1 carry operation." << endl;
		else
			cout <<carry<< " carry operations." << endl;
	}
	return 0;
}