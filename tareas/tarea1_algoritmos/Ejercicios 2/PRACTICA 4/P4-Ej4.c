#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[40];
    float sueldoMensual;
    int antiguedad;   
    float sueldoBruto;
    float impuesto;
    float sueldoNeto;
} Empleado;

float calcularBruto(float sueldoMensual, int antiguedad) {
    float bonificacion = 0.0;
    if (antiguedad >= 3) {
        bonificacion = sueldoMensual * 0.02 * antiguedad; 
    }
    return (sueldoMensual / 2.0) + bonificacion;
}

float calcularImpuesto(float bruto) {
    
    float salarioMinimo = 300.0f;  
    if (bruto <= salarioMinimo) return 0.0f;

    float excedente = bruto - salarioMinimo;
    float cuotaFija = 0.0, porcentaje = 0.0;
    float limiteInferior = 0.0;

    if (excedente >= 1 && excedente <= 300) 
    {
        cuotaFija = 30; porcentaje = 0.03; limiteInferior = 1;
    } 
    else if (excedente <= 700) 
    {
        cuotaFija = 50; porcentaje = 0.08; limiteInferior = 301;
    } 
    else if (excedente <= 1100) 
    {
        cuotaFija = 100; porcentaje = 0.11; limiteInferior = 701;
    } 
    else if (excedente <= 1700) 
    {
        cuotaFija = 150; porcentaje = 0.16; limiteInferior = 1101;
    } 
    else 
    {
        cuotaFija = 200; porcentaje = 0.20; limiteInferior = 1701;
    }

    return cuotaFija + (excedente - limiteInferior) * porcentaje;
}

int main() {
    int n;
    Empleado emp[50];

    printf("Ingrese cantidad de empleados: ");
    scanf("%d", &n);
    getchar();

    float totalBruto = 0, totalImp = 0, totalNeto = 0;

    for (int i = 0; i < n; i++) {
        printf("\nEmpleado %d\n", i + 1);
        printf("Nombre: ");
        fgets(emp[i].nombre, sizeof(emp[i].nombre), stdin);
        emp[i].nombre[strcspn(emp[i].nombre, "\n")] = '\0';

        printf("Sueldo mensual: ");
        scanf("%f", &emp[i].sueldoMensual);
        printf("Antigüedad (años): ");
        scanf("%d", &emp[i].antiguedad);
        getchar();

        emp[i].sueldoBruto = calcularBruto(emp[i].sueldoMensual, emp[i].antiguedad);
        emp[i].impuesto = calcularImpuesto(emp[i].sueldoBruto);
        emp[i].sueldoNeto = emp[i].sueldoBruto - emp[i].impuesto;

        totalBruto += emp[i].sueldoBruto;
        totalImp   += emp[i].impuesto;
        totalNeto  += emp[i].sueldoNeto;
    }

    printf("\n\n\t\t\t\tNOMINA QUINCENAL\n");
    printf("%-25s %15s %15s %15s\n", "NOMBRE", "SDO. BRUTO", "IMPUESTO", "SDO. NETO");

    for (int i = 0; i < n; i++) {
        printf("%-25s %15.2f %15.2f %15.2f\n",
               emp[i].nombre, emp[i].sueldoBruto, emp[i].impuesto, emp[i].sueldoNeto);
    }

    printf("\n%-10s %15d %15.2f %15.2f %15.2f\n",
           "TOTAL", n, totalBruto, totalImp, totalNeto);

    return 0;
}