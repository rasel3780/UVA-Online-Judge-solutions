#include <bits/stdc++.h>
#define FILE freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout)
using namespace std;
int main(){
    //FILE;
    int t, amount=0;
    scanf("%d", &t);

    while(t--){
        char str[20];
        scanf("%s", str);
        
        if(str[0]=='d'){
            int donation;
            scanf("%d", &donation);
            amount+=donation;
        }
        else{
            printf("%d\n",amount);
        }
    }
}