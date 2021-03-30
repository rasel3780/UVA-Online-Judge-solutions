#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
#define SPEED ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pi 2.0*acos(0.0)
#define NL '\n'
#define MOD 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ll p, pRev, sum, sumRev;


ll rev(ll num){

    ll rev = 0;
    while(num!=0){
        int rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    return rev;
}

void sol(){
    cin>>p;
    bool check = true;
    int cnt=1;
    while(check){
        pRev = rev(p);
        sum = p+pRev;
        sumRev = rev(sum);
        if(sum==sumRev){
            cout<<cnt<<" "<<sum<<NL;
            check = false;
        }
        else{
            p = sum;
            cnt++;
        }
    }

}

int main(){
    //FILE;
    SPEED;
    int t=1;
    cin>>t;
    while(t--){
        sol();
    }
}

