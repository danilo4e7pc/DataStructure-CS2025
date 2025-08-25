#include<stdio.h>
#include<math.h>

int main(){

    float x = -1, sec, csc, tg;
    char band = 'F';

    printf("   X      Secante X     Cosecante X     Tangente X");

    while(x < 1.1){

        sec = 1/cos(x);
        csc = 1/sin(x);
        tg = tan(x);

        if(x < 0) printf("\n %.1f       %.2f          %.2f           %.2f",x,sec,csc,tg);
        else{

            if((int)sin(x) == 0 && band == 'F') {
                
                printf("\n  %.1f       %.2f            EN            %.2f",x,sec,tg);
                band = 'V';
            }

            else printf("\n  %.1f       %.2f          %.2f            %.2f",x,sec,csc,tg);
        }

        x += 0.1;
    }

    return 0;
}