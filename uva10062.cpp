#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	string word;
	int n = 0;
	while (getline(cin,word))
	{
		if (n > 0)
			cout << endl;
		n++;
		map<char, int> ascii;
		int max = 0;
		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] < 32 || word[i]>127)
				continue;
			if (ascii.find(word[i]) != ascii.end())
				ascii[word[i]]	++;
			else
				ascii[word[i]] = 1;
			if(ascii[word[i]] > max)
				max = ascii[word[i]];
		}
		int  min = 1;
		for (int i = 0; i < word.size(); i++)
		{
			for (char j = 127; j > 31; j--)
			{
				if (ascii.find(j) != ascii.end()&&ascii[j]==min)
					cout << (int)j << " " << ascii[j] << endl;
			}
			min++;
		}

	}
}