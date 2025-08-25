#include<stdio.h>

void LeerDatos(int* n1, int* n2, int* n3){

    printf("Ingrese el primer numero: ");
    scanf("%d",n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",n2);
    printf("Ingrese el tercer numero: ");
    scanf("%d",n3);
}

int HallarMayor(int n1, int n2, int n3){

    if(n1 < n2){

        if(n3 < n2){

            return n2;
        }
        else{

            return n3;
        }
    }
    else{

        if(n3 < n1){

            return n1;
        }
        else{

            return n3;
        }
    }
}

void ImprimirMayor(int m){

    printf("El mayor numero es %d",m);
}

int main(){

    int n1, n2, n3, mayor;

    LeerDatos(&n1,&n2,&n3);
    mayor = HallarMayor(n1,n2,n3);
    ImprimirMayor(mayor);

    return 0;
}