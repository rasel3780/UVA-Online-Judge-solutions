/**
 *    author:  rasel kibria
 *    created: 06.07.2020
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)cout<<">\n";
        if(a<b)cout<<"<\n";
        if(a==b)cout<<"=\n";
    }
    return 0;
}
