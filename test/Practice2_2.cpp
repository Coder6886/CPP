#include<stdio.h>
#include<math.h>
int main()
{
#ifdef LOCAL
printf("Defined LOCAL");
freopen("data2_2.in", "r", stdin);
freopen("data2_2.out", "w", stdout);
#endif
    int kase = 0, n = 1, x = 0, y = 0, z = 0;
    while (scanf("%d%d%d", &x, &y, &z) == 3){
        n = 1;
        for (int i = 10; i <= 100;i++){
            if (i % 3 == x && i % 5 == y && i % 7 == z){
                printf("Case %d: %d", ++kase, i);
                n = 0;
                break;
            }
        }
        if (n == 1){
            printf("Case %d: No answer", ++kase);
        }
        printf("\n");

    }
    return 0;
}
