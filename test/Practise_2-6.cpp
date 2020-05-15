#include<stdio.h>
int main(){
    int a = 0, b = 0, c = 0;
    for(int hundred = 1; hundred <= 9; hundred++){
        for(int ten = 1; ten <= 9; ten++){
            if (hundred == ten){
                continue;
            }
            for(int one = 1; one <= 9; one++){
                if (one == ten || one == hundred){
                    continue;
                }
                a = hundred*100 + ten * 10 + one;
                for(int hundred2 = 1; hundred2 <= 9; hundred2++){
                    if (hundred2 == hundred || hundred2 == ten || hundred2 == one){
                        continue;
                    }
                    for(int ten2 = 1; ten2 <= 9; ten2++){
                        if (hundred2 == ten2||ten2 == hundred || ten2 == ten || ten2 == one){
                            continue;
                        }
                        for(int one2 = 1; one2 <= 9; one2++){
                            if (one2 == ten2 || one2 == hundred2 || one2 == hundred || one2 == ten || one2 == one){
                                continue;
                            }
                            b = hundred2*100 + ten2 * 10 + one2;
                            for(int hundred3 = 1; hundred3 <= 9; hundred3++){
                                if (hundred3 == hundred2 || hundred3 == ten2 || hundred3 == one2 || hundred3 == hundred || hundred3 == ten || hundred3 == one){
                                    continue;
                                }
                                for(int ten3 = 1; ten3 <= 9; ten3++){
                                    if (ten3 == hundred2 || ten3 == ten2 || ten3 == one2 || ten3 == hundred || ten3 == ten || ten3 == one||ten3 == hundred3){
                                        continue;
                                    }
                                    for(int one3 = 1; one3 <= 9; one3++){
                                        if (one3 == hundred2 || one3 == ten2 || one3 == one2 || one3 == hundred || one3 == ten || one3 == one|| one3 == hundred3 || one3 == ten3){
                                            continue;
                                        }
                                        c = hundred3*100 + ten3 * 10 + one3;
                                        if (b == 2*a && c == 3 * a){
                                            printf("%d %d %d\n", a, b, c);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
