#include <bits/stdc++.h>
#define FILE freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout)
using namespace std;

void sol(){
    int n,m;
    scanf("%d %d", &n, &m);
    int h = n/3;
    int w = m/3;
    int ans = h*w;
    printf("%d\n", ans);
}
int main(){
    //FILE;
    int t;
    scanf("%d", &t);
    while(t--){
        sol();
    }
}