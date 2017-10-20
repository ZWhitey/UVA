#include<iostream>
#include<string>
using namespace std;
int convert(const char a)
{
	switch (a)
	{
	case 'W':
		return 64;
	case 'H':
		return 32;
	case 'Q':
		return 16;
	case 'E' :
		return 8;
	case 'S':
		return 4;
	case 'T':
		return 2;
	case 'X':
		return 1;
	default:
		break;
		return 0;
	}
}

int main()
{
	string a;
	while (cin>>a &&a!="*")
	{
		int c = 0,t=0;
		for (int i=1;i<a.size();++i)
		{
			if(a[i]!='/')
				t += convert(a[i]);
			else
			{
				if (t == 64)
					c++;
				t = 0;
			}
		}
		cout << c << endl;
	}
	
	return 0;
}