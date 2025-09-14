#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct {
    char marca[30];
    char origen[20];
    float costo;
    float impuesto;
    float precioVta;
} Auto;

float calcularImpuesto(const char *origen, float costo) {
    if (strcmp(origen, "ALEMANIA") == 0) return costo * 0.20;
    else if (strcmp(origen, "JAPON") == 0) return costo * 0.30;
    else if (strcmp(origen, "ITALIA") == 0) return costo * 0.15;
    else if (strcmp(origen, "USA") == 0) return costo * 0.08;
    else return 0.0f;
}

int main() {
    int n;
    Auto autos[50];

    int countAle = 0, countJap = 0, countIta = 0, countUsa = 0;

    float totalCosto = 0, totalImp = 0, totalPrecio = 0;

    printf("Ingrese cantidad de autos importados: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nAuto %d\n", i + 1);
        printf("Marca: ");
        fgets(autos[i].marca, sizeof(autos[i].marca), stdin);
        autos[i].marca[strcspn(autos[i].marca, "\n")] = '\0';

        printf("Origen (ALEMANIA/JAPON/ITALIA/USA): ");
        fgets(autos[i].origen, sizeof(autos[i].origen), stdin);
        autos[i].origen[strcspn(autos[i].origen, "\n")] = '\0';

        for(int j=0; j<strlen(autos[i].origen);j++)
        {
            autos[i].origen[j] = toupper(autos[i].origen[j]);
        }

        printf("Costo: ");
        scanf("%f", &autos[i].costo);
        getchar();

        autos[i].impuesto = calcularImpuesto(autos[i].origen, autos[i].costo);
        autos[i].precioVta = autos[i].costo + autos[i].impuesto;

        totalCosto += autos[i].costo;
        totalImp   += autos[i].impuesto;
        totalPrecio+= autos[i].precioVta;

        if (strcmp(autos[i].origen, "ALEMANIA") == 0) countAle++;
        else if (strcmp(autos[i].origen, "JAPON") == 0) countJap++;
        else if (strcmp(autos[i].origen, "ITALIA") == 0) countIta++;
        else if (strcmp(autos[i].origen, "USA") == 0) countUsa++;
    }

    printf("\n\n\t\t\t\tREPORTE DE AUTOS IMPORTADOS\n\n");
    printf("%-20s %-15s %15s %15s %15s\n",
           "MARCA", "ORIGEN", "COSTO", "IMPUESTO", "PRECIO VTA.");

    for (int i = 0; i < n; i++) {

        printf("%-20s %-15s %15.2f %15.2f %15.2f\n", autos[i].marca, autos[i].origen,
               autos[i].costo, autos[i].impuesto, autos[i].precioVta);
    }

    printf("\nTOTAL       %10d AUTOS      %15.2f  %15.2f  %15.2f\n",n, totalCosto, totalImp, totalPrecio);

    printf("\nALEMANIA:\t%d", countAle);
    printf("\nJAPON:\t\t%d", countJap);
    printf("\nITALIA:\t\t%d", countIta);
    printf("\nUSA:\t\t%d\n", countUsa);

    int max = countAle, idx = 0;
    char paisMax[20] = "ALEMANIA";

    if (countJap > max) 
    { 
        max = countJap; 
        strcpy(paisMax, "JAPON"); 
    }

    if (countIta > max) 
    { 
        max = countIta; 
        strcpy(paisMax, "ITALIA"); 
    }
    
    if (countUsa > max) 
    { 
        max = countUsa; 
        strcpy(paisMax, "USA"); 
    }

    printf("\nPAIS DEL QUE SE IMPORTO MAS AUTOS: %s\n", paisMax);

    return 0;
}