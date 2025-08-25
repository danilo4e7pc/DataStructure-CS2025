#include <stdio.h>

float calcularPromedio(float notas[], int n) {
    float suma = 0;

    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }

    return suma / n;
}
char* estadoAlumno(float promedio) {
    
    if (promedio > 6)

        return "Aprobado";

    else 
        if (promedio >= 4)

            return "Verificacion Suplementaria";
        else

            return "Reprobado";
}

int main() {
    int n;
    float notas[20];

    printf("Ingrese la cantidad de notas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("Ingrese la nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float promedio = calcularPromedio(notas, n);

    printf("\nPromedio del alumno: %.2f\n", promedio);
    printf("Estado del alumno: %s\n", estadoAlumno(promedio));

    return 0;
}