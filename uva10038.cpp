#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main() 
{
	int count;
	while (cin>>count)
	{
		vector<int> num(count);
		for (int i = 0; i < count; i++)
			cin >> num[i];
		vector<int>dif;
		bool nj= false;
		for (int i = 0; i < num.size() - 1; i++)
			dif.push_back(abs(num[i] - num[i + 1]));
		sort(dif.begin(), dif.end());
		for(int i=0,t=1;i<dif.size();i++,t++)
			if (dif[i] != t)
			{
				nj=true;
				break;
			}
		if(nj)
			cout << "Not jolly" << endl;
		else
			cout << "Jolly" << endl;	
	}
	return 0;
}