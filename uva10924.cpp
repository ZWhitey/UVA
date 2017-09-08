#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool checkprime(int a)
{
	int sq = sqrt(a);
	for (int i = 2; i <= sq; i++)
	{
		if (a%i == 0)
			return false;
	}
	return true;
}

int main()
{
	string in;
	while (cin>>in)
	{
		int sum = 0;
		for (auto i : in)
		{
			if (i < 'a')
				sum += i - 'A' + 27;
			else
				sum += i - 'a'+1;
		}
		cout << "It is" <<( checkprime(sum) ? " a " : " not a ") << "prime word." << endl;
	}
	return 0;
}