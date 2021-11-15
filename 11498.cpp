#include <bits/stdc++.h>
#define FILE freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout)
using namespace std;

int main(){
   // FILE;
    int k, x, y;
    while((scanf("%d",&k)==1 && k)){
        int n,m;
        scanf("%d %d", &n, &m);
    
        while(k--){
            scanf("%d %d", &x, &y);
            if(n==x || m==y){
                printf("divisa\n");
            }
            else if(x>n && y>m){
                printf("NE\n");
            }
            else if(x>n && y<m){
                printf("SE\n");
            }
            else if(x<n && y>m){
                printf("NO\n");
            }
            else{
                printf("SO\n");
            }
        }
    }   
}