#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c;

    printf("Siendo la ecuacion de segundo grado: ax2 + bx + c = 0\nIngrese los valores de a,b,c.");
    printf("\na = "); scanf("%f",&a);

    while(a == 0){

        printf("Como la ecuacion es de segundo grado, el coeficiente 'a' no puede valer 0.");
        printf("Ingrese otro valor para 'a': ");
        scanf("%f",&a);
    }

    printf("b = "); scanf("%f",&b);
    printf("c = "); scanf("%f",&c);

    // Hallamos el discriminante para definir la naturaleza de las raices

    float disc = b*b - 4*(a*c);
    float r1;
    if(disc == 0){

        r1 = -b/(2*a);

        printf("La ecuacion posee solo una raiz: %.3f",r1);
    }
    else {

        float r2;

        if(disc > 0){

            r1 = (-b + sqrt(disc))/(2*a);
            r2 = (-b - sqrt(disc))/(2*a);
            
            printf("Las raices de la ecuacion son: %.3f y %.3f",r1,r2);
        }
        else{

            r1 = -b/(2*a);
            r2 = sqrt(-disc)/(2*a);

            printf("Las raices de la ecuacion son: %.2f + %.2fi y %.2f - %.2fi",r1,r2,r1,r2);
        }
            
    }

    return 0;
}