#include<stdio.h>
#include<string.h>

typedef struct{

    char titulo[40];
    float calif[3];
    float caliFinal;
    char obs[15];

}Curso;

typedef struct{

    char nombre[30];
    int cCursos;
    Curso cursos[40];
    float promCursos;
}Alumno;

int main(){

    int n;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d",&n);

    Alumno a[n];
    float suma, sumac, promAlumnos = 0;

    for(int i=0; i<n; i++){

        getchar();
        printf("\nNombre del alumno %d: ",i+1);
        fgets(a[i].nombre,sizeof(a[i].nombre),stdin);
        a[i].nombre[strcspn(a[i].nombre,"\n")] = '\0';

        printf("Cantidad de cursos que ha llevado: ");
        scanf("%d",&a[i].cCursos);

        sumac = 0;

        for(int j=0; j<a[i].cCursos; j++){

            getchar();
            printf("\n");
            printf("Curso %d: ",j+1);
            fgets(a[i].cursos[j].titulo,sizeof(a[i].cursos[j].titulo),stdin);
            a[i].cursos[j].titulo[strcspn(a[i].cursos[j].titulo,"\n")] = '\0';

            suma = 0;
            for(int k=0; k<3; k++){

                printf("Calificacion %d: ",k+1);
                scanf("%f",&a[i].cursos[j].calif[k]);

                suma += a[i].cursos[j].calif[k];
            }

            a[i].cursos[j].caliFinal = suma/3;

            if(a[i].cursos[j].caliFinal >= 10.5) strcpy(a[i].cursos[j].obs,"APROBADO");
            else strcpy(a[i].cursos[j].obs,"DESAPROBADO");

            sumac += a[i].cursos[j].caliFinal;
        }

        a[i].promCursos = sumac/a[i].cCursos;
        promAlumnos += a[i].promCursos;
    }
    
    promAlumnos /= n;

    printf("\n\n%-20s %-20s %-15s %-15s\n", "NOMBRE", "CURSOS", "CALIF. FINAL", "OBSERVACION");
    printf("--------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i].cCursos; j++) {
            if (j == 0) {
                printf("%-20s %-20s %13.2f   %-15s\n",
                       a[i].nombre,
                       a[i].cursos[j].titulo,
                       a[i].cursos[j].caliFinal,
                       a[i].cursos[j].obs);
            } else {
                printf("%-20s %-20s %13.2f   %-15s\n",
                       "",
                       a[i].cursos[j].titulo,
                       a[i].cursos[j].caliFinal,
                       a[i].cursos[j].obs);
            }
        }

        printf("\nTOTAL ALUMNO   %3d    CURSOS   PROMEDIO: %8.2f\n",
               a[i].cCursos, a[i].promCursos);
        printf("--------------------------------------------------------------------------------\n");
    }

    printf("\nTOTAL GENERAL  %3d ALUMNOS      PROMEDIO GENERAL: %8.2f\n",
           n, promAlumnos);

    return 0;
}