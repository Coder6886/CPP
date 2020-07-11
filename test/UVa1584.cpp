#include<stdio.h>
#include<string.h>
#define maxn 210
#define ttt 45
int main(){
    int T,L;
    int ans[maxn/2],a[maxn];
    char str[ttt],s;
    scanf("%d",&T);
    while(T-->0){
        scanf("%s",str);
        L=strlen(str);
        int c = 0;
        while(c < L){
            s=str[c];
            if (s == 'A'){
                a[c] = 1;
            }
            else if(s == 'C'){
                a[c] = 2;
            }
            else if(s == 'G'){
                a[c] = 3;
            }
            else{
                a[c] = 4;
            }

            c += 1;

        }
        for(int i = 0;i < L;i++){
            a[i+L] = a[i];
        }
        for(int j = 0;j < L;j++){
            ans[j] = a[j];
        }
        int n = 0;
        for(int i = 1;i < L;i++){
            for(int j = 0;j < L;j++){
                if (ans[j] < a[i+j]){
                    n = 1;
                    break;
                }
                else if(ans[j] > a[i+j]){
                    break;
                }
            }
            if (n == 0){
                for(int j = 0;j < L;j++){
                    ans[j] = a[i+j];
                }
            }
            n = 0;
        }
        for(int i = 0;i < L;i++){
            if(ans[i] == 1){
                printf("A");
            }
            else if (ans[i] == 2){
                printf("C");
            }
            else if (ans[i] == 3){
                printf("G");
            }
            else if (ans[i] == 4){
                printf("T");
            }
        }
          printf("\n");
    }
    return 0;
}
