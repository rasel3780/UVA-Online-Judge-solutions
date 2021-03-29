#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
#define SPEED ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pi 2.0*acos(0.0)
#define NL '\n'
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void sol(){
    int n, temp;
    cin>>n;
    int maxx = 0;
    int minn = 110;
    while(n--){

        cin>>temp;
        if(temp>maxx)
            maxx=temp;
        if(temp<minn)
            minn = temp;
    }
    cout<<2*(maxx-minn)<<NL;
}

int main(){
    SPEED;
    //FILE;

    int t=1;
    cin>>t;
    while(t--){
        sol();
    }
}
