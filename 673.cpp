#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
using namespace std;

bool sol(string s){
    stack<char>stk;
    int len = s.length();

    if(len%2!=0){
        return 0;
    }
    else{
        for(int i=0; i<len; i++){
            if(s[i]=='(' || s[i]=='['){
                stk.push(s[i]);
            }
            //checking for parentheses
            else if(!stk.empty() && stk.top()=='(' && s[i]==')'){
                    stk.pop();
                }
            //checking third bracket
            else if(!stk.empty() && stk.top()=='[' && s[i]==']'){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        return stk.empty();
    }
}

int main(){
    //FILE;
    int n;
    cin>>n;
    cin.ignore();

    while(n--){
        string str;
        getline(cin, str);

        if(sol(str))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
