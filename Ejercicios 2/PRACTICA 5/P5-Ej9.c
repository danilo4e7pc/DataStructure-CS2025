#include<stdio.h>

int DigitoVerificador(int);

int main(){

    int n, digver;

    printf("Digite un numero entero de cinco cifras: ");
    scanf("%d",&n);

    digver =  DigitoVerificador(n);

    printf("El digito verificador del numero es entonces: %d",digver);

    return 0;
}
int DigitoVerificador(int n){

    int c, suma = 0, r;

    for(int i=2; i<=6; i++){

        c = n%10;
        n /= 10;
        c *= i;
        suma += c;
    }

    r = suma%11;

    if(r != 0 && r!= 1) r = 11-r;

    return r;
}