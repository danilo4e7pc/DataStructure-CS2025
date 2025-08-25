#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

void LlenarVector(int v[], int n){

    for(int i=0; i<n; i++){

        v[i] = rand()%100;
    }
}
float ObtenerMedia(int a[],int n){

    int suma = 0;

    for(int i=0; i<n; i++){

        suma += a[i];
    }
    return ((float)suma)/n;
}
float ObtenerDesviacionMedia(int a[],int n){

    float suma = 0;
    float m = ObtenerMedia(a,n);

    for(int i=0; i<n; i++){

        suma += (a[i] - m);
    }

    return ((float)suma)/n;
}
float ObtenerDesviacionTipica(int a[],int n){

    float suma = 0, p;
    float m = ObtenerMedia(a,n);

    for(int i=0; i<n; i++){

        p = a[i] - m;
        suma += p*p;
    }

    return sqrt((float)suma/n);
}

int main(){

    srand(time(NULL));

    int v[50], n, media;
    float m, dm, dt;

    printf("Ingrese el numero de elementos del vector: ");
    scanf("%d",&n);

    LlenarVector(v,n);
    m = ObtenerMedia(v,n);
    dm = ObtenerDesviacionMedia(v,n);
    dt = ObtenerDesviacionTipica(v,n);

    printf("La media de los elementos del vector es %.2f",m);
    printf("\nLa desviacion media de los elementos del vector es %.2f",dm);
    printf("\nLa desviacion tipico de los elementos del vector es %.2f",dt);

    return 0;
}