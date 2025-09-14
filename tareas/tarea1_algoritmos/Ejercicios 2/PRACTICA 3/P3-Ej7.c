#include<stdio.h>
#include<string.h>

typedef struct {
    char placa[15];
    int zona;
    int limite;
    int velocidad;
    float multa;
} Infraccion;

int main() {
    int n;
    Infraccion infracciones[100];

    int countZ1 = 0, countZ2 = 0, countZ3 = 0;
    float montoZ1 = 0, montoZ2 = 0, montoZ3 = 0;

    printf("Ingrese la cantidad de infracciones: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) 
    {
        printf("\nInfraccion %d\n", i + 1);

        printf("Numero de placa: ");
        fgets(infracciones[i].placa, sizeof(infracciones[i].placa), stdin);
        infracciones[i].placa[strcspn(infracciones[i].placa, "\n")] = '\0';

        printf("Zona (1,2,3): ");
        scanf("%d", &infracciones[i].zona);

        printf("Limite de velocidad (km/h): ");
        scanf("%d", &infracciones[i].limite);

        printf("Velocidad del vehiculo (km/h): ");
        scanf("%d", &infracciones[i].velocidad);
        getchar();

        if (infracciones[i].velocidad > infracciones[i].limite) {
            infracciones[i].multa = (infracciones[i].velocidad - infracciones[i].limite) * 3.0f;
        } else {
            infracciones[i].multa = 0.0f;
        }

        if (infracciones[i].zona == 1) 
        {
            countZ1++;
            montoZ1 += infracciones[i].multa;
        } 
        
        else if (infracciones[i].zona == 2) 
        {
            countZ2++;
            montoZ2 += infracciones[i].multa;
        } 
        
        else if (infracciones[i].zona == 3) 
        {
            countZ3++;
            montoZ3 += infracciones[i].multa;
        }
    }

    printf("\n\nINFRACCIONES A LOS LIMITES DE VELOCIDAD\n\n");
    printf("%-15s %-10s %-10s     %-10s\n", "VEHICULO", "REG.", "VELOCIDAD", "MULTA");

    for (int i = 0; i < n; i++) 
    {
        printf("%-15s %-10d %-10d %10.2f\n",
               infracciones[i].placa,
               infracciones[i].zona,
               infracciones[i].velocidad,
               infracciones[i].multa);
    }

    printf("\nZONA 1 :  TOTAL DE INFRACCIONES : %d\n   MONTO RECAUDADO EN MULTAS : %.2f\n",
           countZ1, montoZ1);
    printf("\nZONA 2 :  TOTAL DE INFRACCIONES : %d\n   MONTO RECAUDADO EN MULTAS : %.2f\n",
           countZ2, montoZ2);
    printf("\nZONA 3 :  TOTAL DE INFRACCIONES : %d\n   MONTO RECAUDADO EN MULTAS : %.2f\n",
           countZ3, montoZ3);

    return 0;
}