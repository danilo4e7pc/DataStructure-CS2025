#include<stdio.h>

void LeerDato(int*);
int ObtenerHoras(int);
int ObtenerMinutos(int,int);
int ObtenerSegundos(int,int,int);
void EscribirDatos(int,int,int);

int main(){

    int n, hora, min, seg;

    LeerDato(&n);
    hora = ObtenerHoras(n);
    min = ObtenerMinutos(n,hora);
    seg = ObtenerSegundos(n,hora,min);
    EscribirDatos(hora,min,seg);

    return 0;
}
void LeerDato(int *n){

    printf("Ingrese un tiempo en segundos: ");
    scanf("%d",n);
}
int ObtenerHoras(int n){

    return n/3600;
}
int ObtenerMinutos(int n,int h){

    return (n - 3600*h)/60;
}
int ObtenerSegundos(int n,int h,int min){
    
    return n - 3600*h - min*60;
}
void EscribirDatos(int hora,int min,int seg){

    printf("El tiempo en horas-minutos-segundos es entonces: %02d:%02d:%02d",hora,min,seg);
}