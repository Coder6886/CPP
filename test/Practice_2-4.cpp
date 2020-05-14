#include<stdio.h>
int main(){
    double n = 0, m = 0;
    double ans = 0.0;
    int kase = 0;
    while (scanf("%lf%lf",&n, &m) == 2){
        if (n == 0 && m == 0){
            break;
        }
        ans = 0.0;
        kase++;
        for (int i = 0; i <= m-n; i++){
           // ans = ans + 1.0/(n*n+2*i*n+i*i);
            ans = ans + 1.0/((n+i)*(n+i));
        }
        printf("Case %d:%.5lf",kase, ans);
    }
    return 0;
}
