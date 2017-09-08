#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	string num;
	while (cin>>num&&num!="0")
	{
		int odd = 0;
		int even = 0;
		for (int i = 0; i < num.size(); i++)
		{
			if (i % 2 == 0)
				odd += ((int)num[i] - '0');
			else
				even += ((int)num[i] - '0');
		}
		if (abs(odd - even) % 11 == 0)
			cout << num << " is a multiple of 11." << endl;
		else
			cout << num << " is not a multiple of 11." << endl;
	}
	return 0;
}