#include<stdio.h>
int main()
{
#ifdef LOCAL
freopen("data2_2.in", "r", stdin);
//freopen("data2_2.out", "w", stdout);
#endif
    int kase = 0, n = 0, x = 0, y = 0, z = 0;
    const int c3 = 70, c5 = 21, c7 = 15;
    while (scanf("%d%d%d", &x, &y, &z) == 3){
        n = (c3*x+c5*y+c7*z)%105;
        if(n >= 10 && n <= 100){
            printf("Case %d: %d\n", ++kase, n);
        }
        else{
            printf("Case %d: No answer\n", ++kase);
        }
    }
    return 0;
}
