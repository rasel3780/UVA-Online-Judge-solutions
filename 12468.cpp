#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, res;
    while(scanf("%d %d", &x, &y))
    {
        if(x==-1 && y==-1)
            break;

        res = fabs(x-y);
        if(res>50)
            res = 100-res;
        printf("%d\n", res);
    }
    return 0;
}
