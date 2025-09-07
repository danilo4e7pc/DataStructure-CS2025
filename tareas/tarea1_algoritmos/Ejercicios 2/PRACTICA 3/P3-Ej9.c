#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n;

    printf("Cantidad de empleados: ");
    scanf("%d",&n);

    // Reservando memoria para un arreglo de punteros (char*)
    char **nombres = malloc(n*sizeof(char*));
    for(int i=0; i<n; i++){

        // Reservando memoria (30) para cada puntero (cadena) dentro del arreglo
        nombres[i] = malloc(30 * sizeof(char));
    }

    // Reservando memoria para los siguientes arreglos
    float *sMensual = malloc(n * sizeof(float));
    float *sActual = malloc(n * sizeof(float));
    int *tipo = malloc(n * sizeof(int));

    printf("Datos de los empleados: ");

    for(int i=0; i<n; i++){

        printf("\nEmpleado %d",i+1);
        printf("\nNombre: ");
        getchar();
        fgets(nombres[i],30,stdin);
        nombres[i][strcspn(nombres[i],"\n")] = '\0';

        printf("Sueldo mensual: ");
        scanf("%f",&sMensual[i]);
        printf("Tipo de empleado: ");
        scanf("%d",&tipo[i]);

        switch(tipo[i])
        {
            case 1: sActual[i] = sMensual[i]*1.05; break;
            case 2: sActual[i] = sMensual[i]*1.07; break;
            case 3: sActual[i] = sMensual[i]*1.1; break;
            case 4: sActual[i] = sMensual[i]*1.14; break;
            case 5: sActual[i] = sMensual[i]*1.18;
        }
    }

    printf("\t  AUMENTO DE SUELDOS\n");
    printf("NOMBRE    SUELDO ANTERIOR    SUELDO ACTUAL\n"); 

    float tMensual = 0.0, tActual = 0.0;

    for(int i=0; i<n; i++)
    {
        printf("%s         %.2f            %.2f\n",nombres[i],sMensual[i],sActual[i]);
        tMensual += sMensual[i];
        tActual += sActual[i];
    }

    printf("TOTAL\t\t%.3f\t\t%.3f",tMensual,tActual);
    
    // Liberamos la memoria de todos los punteros
    free(sMensual);
    free(sActual);
    free(tipo);
    
    for(int i=0; i<n; i++){

        // Liberamos la memoria de cada cadena dentro de "**nombres"
        free(nombres[i]);
    }

    // Finalmente, liberamos la memoria del arreglo de punteros
    free(nombres);

    return 0;
}