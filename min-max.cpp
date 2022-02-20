#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int m = 0;
		int n; cin >> n;
		int a[n];
		for(int i = 0; i<n; i++)
		{
			cin >> a[i];
		}

		for(int i = 2; i<=n; i++)
		{
			if(a[i]>a[i-1] and a[i]>a[i+1])
			{
				a[i] = a[2];
				m++;
			}
		}
		cout<<m<<"\n";
		for(int i = 0; i<n; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";

	}
	return 0;
}