#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string s1;
	s1 = toupper(s[0]);

	for(int i = 1; i<s.length(); i++)
	{
		s1.push_back(s[i]);
	}
	cout<<s1;
}