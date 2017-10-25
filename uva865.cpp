#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	int a;
	cin >> a;
	cin.ignore();
	while (a-->0)
	{
		string plain,sub;
		while (getline(cin, plain) && plain == "") {}
		getline(cin, sub);
		cout << sub << endl<<plain<<endl;
		map<char, char>table;
		for (int i = 0; i < plain.size(); ++i)
			table[plain[i]] = sub[i];
		string text;
		while (getline(cin, text)&&text!="")
		{
			for (int i = 0; i < text.size(); ++i)
			{
				if (table.find(text[i]) == table.end())
					cout << text[i];
				else
					cout << table[text[i]];
			}
			cout << endl;
		}
		if(a!=0)
			cout << endl;
	}
	return 0;
}