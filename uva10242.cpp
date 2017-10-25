#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
struct point
{
	double x;
	double y;
};
bool checkpoint(point a, point b)
{
	return (a.x == b.x&&a.y == b.y);
}
int main()
{
	point p[4];
	while (cin >> p[0].x >> p[0].y >> p[1].x >> p[1].y >> p[2].x >> p[2].y >> p[3].x >> p[3].y)
	{
		int s = 0,ss=0;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = i+1; j < 4; ++j)
			{
				if (checkpoint(p[i],p[j]))
				{
					s = i;
					ss = j;
					break;
				}
			}
		}
		int A[2];
		for (int i = 0,j=0; i < 4&&j<2; ++i)
		{
			if (i != s && i != ss)
			{
				A[j] = i;
				j++;
			}
		}
		cout <<setprecision(3)<<fixed<< p[A[0]].x + p[A[1]].x - p[s].x << " " << p[A[0]].y + p[A[1]].y - p[s].y << endl;
	}
	return 0;
}