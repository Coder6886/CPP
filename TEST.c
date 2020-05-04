//Ï°Ìâ1-6
#include <math.h>
int main() {
    const int a = 1;
    const int b = 2;
    const int c = 3;
    for (int i=0;  i <1; i ++)
    {
        for (int j =0; j<1; j++){
            for (int k=0; k<1; k++)
            {
                int x=10;
                int y=-10;
                // if(i){if(j)x++;}else y++;
                // printf ("%d  %d  %d %d  %d %d\n", i,j,k , i&&j||k,(i&&j)||k,i&&(j||k));
              printf ("%d  %d  %d   \n", i,j,x+(++y) );
              printf ("%d  %d  %d %d  \n", i,j,x++,++y );
            }
        }
    }
        printf("");
    return 0;
}
