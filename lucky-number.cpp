#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n, a = 0; cin >> n;
	char s[n];
	cin >> s;
	for(int  i= 0; i<n-1; i++)
	{
		if(s[i] == s[i+1])
		{
			a++;
		}
	}
	cout<<a<<"\n";

return 0;
}