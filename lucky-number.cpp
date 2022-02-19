#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	char d;
	cin >> d;
	string s;
	s.append(n, d);
	
	for(int i = 0; i<n; i++)
	{
		cout<< s[i];
	}
}