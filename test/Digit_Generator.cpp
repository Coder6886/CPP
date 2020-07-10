#include<stdio.h>
#include<math.h>
#define maxn 100005
int main(){
    int T,n=0,m,ans = 0;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &m);
        int x = 0;
        if (m - 46 > -1){
            x = m-46;
        }
        for(int i = x;i < m;i++){
            ans = i;
            for (int j = 1;j < 6;j++){
                ans += (i%((int)pow(10,j))-i%((int)pow(10,j-1)))/((int)pow(10,j-1));
            }
            if(ans == m){
                n = 1;
                printf("%d\n",i);
                break;
            }
        }
        if (n == 0){
            printf("0\n");
        }
        n = 0;
    }
    return 0;
}
