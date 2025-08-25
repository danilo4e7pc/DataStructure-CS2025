#include<stdio.h>

int main(){

    char temp;
    float T, f, c, k, r;

    printf("F: Farenheit");
    printf("\nC: Celsius");
    printf("\nK: Kelvin");
    printf("\nR: Rankine");
    printf("\nIndique el tipo de temperatura (F,C,K,R): ");
    scanf("%c",&temp);

    printf("Ingrese la temperatura: ");
    scanf("%f",&T);

    switch(temp){

        case 'f':
        case 'F':
            c = (T-32)*5/9;
            k = c + 273;
            r = T + 460;
            printf("La temperatura en Celsius es: %.2f",c);
            printf("\nLa temperatura en Kelvin es: %.2f",k);
            printf("\nLa temperatura en Rankine es: %.2f",r); break;

        case 'c':
        case 'C':
            f =(9/5)*T +32;
            k = T +273;
            r = f + 460;
            printf("La temperatura en Farenheit es: %.2f",f);
            printf("\nLa temperatura en Kelvin es: %.2f",k);
            printf("\nLa temperatura en Rankine es: %.2f",r); break;

        case 'k':
        case 'K':
            c = T - 273;
            f =(9/5)*c +32;
            r = f + 460;
            printf("La temperatura en Celsius es: %.2f",c);
            printf("\nLa temperatura en Farenheit es: %.2f",f);
            printf("\nLa temperatura en Rankine es: %.2f",r); break;

        case 'r':
        case 'R':
            f = T - 460;
            c = (f-32)*(5/9);
            k = c + 273;
            printf("La temperatura en Celsius es: %.2f",c);
            printf("\nLa temperatura en Farenheit es: %.2f",f);
            printf("\nLa temperatura en Kelvin es: %.2f",k); 

        default:
            printf("ERROR, El tipo de temperatura ingresado no e suna de las opciones");
    }

    return 0;
}