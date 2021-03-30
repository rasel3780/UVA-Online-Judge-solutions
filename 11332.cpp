#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
#define SPEED ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pi 2.0*acos(0.0)
#define NL '\n'
#define MOD 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ll n;
void sol(){
    bool flag = true;

    ll temp;

    while(flag){
        ll sum=0;
        //cout<<"temp="<<temp<<NL;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        if(sum>9){
            //cout<<"sum="<<sum<<NL;
            n=sum;
        }
        else{
            cout<<sum<<NL;
            flag=false;
        }
    }
}

int main(){
    //FILE;
    SPEED;
    int t=1;

    while(cin>>n){
        if(n==0){
            break;
        }
        sol();
    }
}

