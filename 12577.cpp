/**
 *    author:  rasel kibria
 *    created: 06.07.2020
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int c =0;
    while(true){
        cin>>str;
        c = c+1;
        if(str=="Hajj")
        {
            cout<<"Case "<<c<<": "<<"Hajj-e-Akbar\n";
        }
        else if(str=="Umrah")
        {
            cout<<"Case "<<c<<": "<<"Hajj-e-Asghar\n";
        }
        else
        {
            break;
        }
    }
    return 0;
}
