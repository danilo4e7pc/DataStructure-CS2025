#include<stdio.h>

int main(){

    char nombre[30];
    float cal1, cal2, cal3, cal4, final;

    printf("Nombre del estudiante: ");
    scanf("%s",&nombre);

    printf("Calificacion 1: ");
    scanf("%f",&cal1);
    printf("Calificacion 2: ");
    scanf("%f",&cal2);
    printf("Calificacion 3: ");
    scanf("%f",&cal3);
    printf("Calificacion 4: ");
    scanf("%f",&cal4);

    final = cal1*0.3 + cal2*0.2 + cal3*0.1 + cal4*0.4;

    printf("La calificacion final es: %.3f",final);

    return 0;
}