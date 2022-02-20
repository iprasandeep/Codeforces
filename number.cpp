// find diviser
#include<bits/stdc++.h>
using namespace std;
int main()
{
	// n -- > 1, n
	int n; cin >> n;
	bool is_prime = true;
	
	if(n == 1)
	{
		cout<<0<<"\n";
		return 0;
	}

	for(int i = 2; i*i<=n; i++)
	{
		if(n%i == 0)
		{
			is_prime = false;
			break;
		}
	}
	// O(N)
	cout<<is_prime;
}