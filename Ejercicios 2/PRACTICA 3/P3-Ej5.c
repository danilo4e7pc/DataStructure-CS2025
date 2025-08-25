#include <stdio.h>
#include <math.h>

int main() {
    int a, b = 1, c = 7;
    int i, j;
    float discriminante;

    printf("Programa para analizar las raices de ax^2 + bx + c = 0\n");

    while(b <= 7 && c >= 1){

        a = b - c;  

        printf("\nValores: a = %d, b = %d, c = %d\n", a, b, c);

        discriminante = (b * b) - (4 * a * c);

        if (a == 0) printf("No es una ecuacion cuadratica (a=0)\n");

        else {
            if (discriminante > 0) printf("Tiene dos raices reales distintas\n");
 
            else 
                
                if (discriminante == 0) printf("Tiene una raiz real unica\n");
                else printf("Tiene dos raices complejas conjugadas\n");
            
        }
        
        b++;
        c--;
    }

    return 0;
}