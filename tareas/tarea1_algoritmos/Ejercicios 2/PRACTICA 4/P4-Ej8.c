#include<stdio.h>
#include<string.h>

typedef struct {
    char nombre[40];
    float sueldoMensual;
    float sueldoBruto;
    float impuesto;
    float sueldoNeto;
} Empleado;

int main() {
    int n;
    float salarioMin;

    printf("Ingrese el salario minimo general: ");
    scanf("%f", &salarioMin);

    printf("Ingrese la cantidad de empleados: ");
    scanf("%d", &n);
    getchar();

    Empleado e[n];

    float totalBruto = 0, totalImpuesto = 0, totalNeto = 0;

    for (int i = 0; i < n; i++) {
        printf("\nNombre del empleado %d: ", i + 1);
        fgets(e[i].nombre, sizeof(e[i].nombre), stdin);
        e[i].nombre[strcspn(e[i].nombre, "\n")] = '\0';

        printf("Sueldo mensual: ");
        scanf("%f", &e[i].sueldoMensual);
        getchar();

        e[i].sueldoBruto = e[i].sueldoMensual / 2;

        if (e[i].sueldoBruto <= salarioMin) {
            e[i].impuesto = 0;
        } else {
            float excedente = e[i].sueldoBruto - salarioMin;
            if (excedente <= salarioMin) {
                e[i].impuesto = excedente * 0.05;
            } else {
                e[i].impuesto = (salarioMin * 0.05) + ((excedente - salarioMin) * 0.10);
            }
        }

        e[i].sueldoNeto = e[i].sueldoBruto - e[i].impuesto;

        totalBruto += e[i].sueldoBruto;
        totalImpuesto += e[i].impuesto;
        totalNeto += e[i].sueldoNeto;
    }

    printf("\n\n%-30s %-15s %-15s %-15s\n", "NOMBRE", "SUELDO BRUTO", "IMPUESTO", "SUELDO NETO");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-30s %13.2f %13.2f %13.2f\n",
               e[i].nombre,
               e[i].sueldoBruto,
               e[i].impuesto,
               e[i].sueldoNeto);
    }

    printf("\nTOTALES %-23d %13.2f %13.2f %13.2f\n",
           n, totalBruto, totalImpuesto, totalNeto);

    return 0;
}