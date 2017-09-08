#include<iostream>
#include<vector>
#include<algorithm>
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
	int a;
	vector<int>Primes;
	int maxprime = 1;
	while (cin >> a&&a != 0)
	{	
		int num = 0;
		for (int i = maxprime+1; i <= a; i++)
			if (checkprime(i))
				Primes.push_back(i);
		if(!Primes.empty())
			maxprime = Primes[Primes.size()-1];
		for (auto i : Primes)
		{
			if (i > a)
				break;
			if (a%i == 0)
				num++;
		}
		cout <<a<<" : "<< num << endl;
	}
	return 0;
}