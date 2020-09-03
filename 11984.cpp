#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int c, d;
    double tempIncrease_In_cel, newTemp;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d", &c, &d);
        /// ((f-32)*5)/9 but here initial temp given in C
        /// increasing temp given in F that was increase from C
        /// so we if we use above law we need to add 32
        /// 0 C = 32 F
        tempIncrease_In_cel = (d*5)/9.0;
        newTemp = tempIncrease_In_cel + c;
        printf("Case %d: %.2lf\n", i, newTemp);
    }
    return 0;
}
