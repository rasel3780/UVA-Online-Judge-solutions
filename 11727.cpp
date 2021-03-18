#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int a[5];
        for(int i=0; i<3; i++)
            scanf("%d", &a[i]);
        sort(a, a+3);
        printf("Case %d: %d\n", i, a[1]);
    }
    return 0;
}
