#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n; 
	cin >> n;

	while(true)
	{
		if(n == 1)
		{
			break;
		}
		else {

			if(n%2 == 0)
		{
			n = n/2;
		}
		else if(n%2 == 1)
		{
			n = n*3;
			n = n+1;
		}
		}
		
		cout<<n<<"\n";
	}
}