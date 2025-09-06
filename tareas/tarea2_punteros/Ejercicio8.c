/*
Hacer una función DIVS que:
- Reciba como parámetro un número entero n por valor y dos números enteros max y min por referencia.
- Devuelva 0 si el número n es primo y 1 en caso contrario. Si el número no es primo, las variables 
  max y min deben asumir los valores del menor y el mayor divisor entero del número, respectivamente, 
  sin considerar el número 1 ni el propio n.
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int DIVS(int n, int *max, int *min)
{
    int div;
    int i=2;
    int raiz = sqrt(n);
    bool primo = true;

    while(i<=raiz && primo == true)
    {
        div = n%i;
        if(div == 0){

            primo = false;
        }
        i++;
    }

    if(primo == false)
    {
        int x = (n-1), y = 2;
        bool menor = false;

        while(y<n && menor == false)
        {
            if((n%y) == 0)
            {
                *min = y;
                menor = true;
            }

            y++;
        }

        *max = n/(*min);

        return 1;
    }

    else return 0;
}

int main(){

    int n, max, min, esPrimo;

    printf("Ingrese un numero: ");
    scanf("%d",&n);

    esPrimo = DIVS(n,&max,&min);

    if (esPrimo == 0)
    {
        printf("El numero %d es primo",n);
    }
    
    else
    {
        printf("El numero %d no es primo",n);
        printf("\nSu maximo divisor (sin considerar el mismo numero) entero es: %d",max);
        printf("\nSu minimo divisor (sin considerar el 1) entero es: %d",min);
    }

    return 0;
}

