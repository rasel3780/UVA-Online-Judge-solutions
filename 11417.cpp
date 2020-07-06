/**
 *    author:  rasel kibria
 *    created: 06.07.2020
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i, j, n;

	while(1)
	{	
		int G=0;
		cin>>n;
		if(n==0)
		{
			break;
		}
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				G+=__gcd(i,j);
			}
		}
		cout<<G<<"\n";
	}
	return 0;
}