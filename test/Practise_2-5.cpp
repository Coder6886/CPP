#include<stdio.h>
int main(){
    double a = 0, b = 0,c=0;
    int kase = 0;
    char * cc;

    while(scanf("%d%d%d", &a, &b, &c) == 3){
        if (a == 0 && b == 0 && c == 0){
            break;
        }
        ++kase;


//        sprintf(cc,"Case %%d: %%.%dlf\n",c); //�����\n������������б��
//        printf(cc, kase, a/b);
        printf("%.*lf\n",c,a/b);  //�����ʽ
    }
    return 0;
}
