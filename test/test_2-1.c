#include<stdio.h>
#include<math.h>
//������ѭ��
int main()
{
//    for (;;)
//    {
//        printf("0");
//        //���break;�Ļ�����Ͳ�����ѭ���ˡ�
//    }
//    return 0;
    for (int a = 1; a <= 9; a++)
        for (int b = 0; b <= 9; b++){
            int n=1100*a + 11 * b;
            int m = floor(sqrt(n) + 0.1);
            if (m * m == n )
                printf("%d %d\n", n,m);
        }

}
