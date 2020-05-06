#include<stdio.h>
#include<math.h>
int main()
{
#ifdef LOCAL
freopen("data2_2.in", "r", stdin);
freopen("data2_2.out", "w", stdout);
#endif
    int i;
    scanf("%d", &i);
    int j = 2 * i - 1;
    for (int k = i; k > 0;k--){
        int n = i-k;
        for (int m = 1; m <= j; m++){
            if (m <= n||m > j - n){
                printf(" ");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
