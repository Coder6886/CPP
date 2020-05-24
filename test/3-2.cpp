#include<stdio.h>
#define maxn 1005
int a[maxn];
int main(){
    int n = 0, k = 0;
    scanf("%d%d", &n, &k);
    for(int i = 0; i <= n; i++){
        a[i] = -1;
    }
    for(int i = 1; i <= k; i++){
        for(int j = 1; i*j<=n; j++){
            a[i*j] *= -1;
        }
    }
    for(int i = 1; i <= n; i++){
        if(a[i] == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
}
