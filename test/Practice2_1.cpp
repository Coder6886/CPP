#include<stdio.h>
#include<math.h>
int main()
{
    for (int i = 100; i < 1000;i++){
        int a = i / 100,b = (i % 100)/10, c = i - 100*a - 10 * b;
        if (a * a * a + b * b * b + c * c * c == i){
            printf("%d\n", i);
        }
    }
    return 0;
}
