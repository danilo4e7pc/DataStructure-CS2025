#include<stdio.h>

int main(){

    printf("TABLA DE MULTIPLICACION\n");

    for(int i=1; i<=10; i++){

        for(int j=1; j<=10; j++){

            printf("| %dx%d=%d ",j,i,i*j);
        }

        printf("\n");
    }

    return 0;
}