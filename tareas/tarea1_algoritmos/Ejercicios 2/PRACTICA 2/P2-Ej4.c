#include<stdio.h>
#include<stdlib.h>

int main(){

    char nombre[30];
    int tipo, horas;
    float pago, total;

    printf("Ingrese los datos del empleado\n");
    printf("Nombre: ");
    scanf("%s",&nombre);
    printf("Tipo de empleado: ");
    scanf("%d: ",&tipo);

    if(tipo < 0 || tipo > 4){
        printf("ERROR, el tipo de empleado ingresado no existe");
    }

    else{
        printf("Numero de horas trabajadas: ");
        scanf("%d",&horas);
        printf("Pago por hora: ");
        scanf("%f",&pago);

        if(horas <= 40) total = pago*horas;

        else{

            switch(tipo){

                case 1:
                    total = pago*40 + 1.5*pago*(horas-40); break;

                case 2:
                    total = pago*40 + 2*pago*(horas-40); break;

                case 3:
                    total = pago*40 + 2.5*pago*(horas-40); break;

                case 4:
                    total = pago*40 + 3*pago*(horas-40); 
            }
        }

    printf("El sueldo total a pagar es: %.2f",total);
    }

    return 0;
}