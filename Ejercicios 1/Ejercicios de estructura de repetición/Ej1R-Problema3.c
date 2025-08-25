#include<stdio.h>

int Fibonacci(int);

int main(){

    int num;

    printf("Ingrese un numero entero no negativo: ");
    scanf("%d",&num);
    printf("0, ");

    for(int i=1; i<=num; i++){

        printf("%d",Fibonacci(i));

        if(i != num){

            printf(", ");
        }
    }

    return 0;
}
int Fibonacci(int n){

    if(n == 1){

        return 1;
    }

    else{

        if(n == 2){

            return 1;
        }

        else{

            return Fibonacci(n-1) + Fibonacci(n-2);
        }
    }

}