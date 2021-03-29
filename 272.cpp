#include <bits/stdc++.h>
#define FILE freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout)
using namespace std;

void sol(){
    string s;
    int tp =0;
    while(getline(cin, s)){
        int len = s.size();
        for(int i=0; i<len; i++){
            if(s[i]=='"' && tp==0){
                printf("``");
                //i++;
                tp=1;
            }
            else if(s[i]=='"' && tp==1){
                printf("''");
                //i++;
                tp=0;
            }
            else{
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}

int main(){
    //FILE;
    sol();
}
