#include<stdio.h>
#include<string.h>
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(){
    int c, flag = 0;
    while((c = getchar()) != EOF){
        for(int i = 0; i < 47; i++){
            if (s[i] == c){
                putchar(s[i-1]);
                flag = 1;
            }
        }
        if(flag == 0){
            putchar(c);
        }
        flag = 0;

    }
}
