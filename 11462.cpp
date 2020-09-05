#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        int  a[n];
        if(n==0)
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        for(int i=0; i<n; i++)
        {
            printf("%d", a[i]);
            if(i<n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
