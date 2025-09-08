#include<stdio.h>
#include<string.h>

int main(){

    char cuenthab[30];
    float sInicial;
    
    printf("Nombre del cuentahabiente: ");
    fgets(cuenthab,30,stdin);
    cuenthab[strcspn(cuenthab,"\n")] = '\0';

    printf("Ingrese el saldo inicial: ");
    scanf("%f",&sInicial);

    char opcion, op;
    float deposito[50], retiro[50], saldo[100];

    getchar();
    printf("Desea hacer un movimiento bancario? (S/N): ");
    scanf("%c",&opcion);

    int i=1;
    saldo[0] = sInicial;

    while(opcion != 'N' && opcion != 'n')
    {
        printf("\nD: Deposito");
        printf("\nR: Retiro");
        getchar();
        printf("\nEscoja el tipo de transaccion(D/R): ");
        scanf("%c",&op);

        if (op == 'D' || op == 'd')
        {
            printf("Cantidad que desea depositar: ");
            scanf("%f",&deposito[i]);
            saldo[i] = saldo[i-1] + deposito[i]; 
            retiro[i] = 0.0;
        }
        else
        {
            printf("Cantidad que desea retirar: ");
            scanf("%f",&retiro[i]);
            saldo[i] = saldo[i-1] - retiro[i]; 
            deposito[i] = 0.0;
        }
        
        getchar();
        printf("\nDesea hacer otro movimiento bancario? (S/N): ");
        scanf("%c",&opcion);

        i++;
    }

    printf("\t\tESTADO DE CUENTA");
    printf("\nCUENTA HABIENTE: %s",cuenthab);
    printf("\nSALDO INICIAL: %.3f",sInicial);
    printf("\nMOVIMIENTO\tDEPOSITO    RETIRO\tSALDO");

    float tDepo = 0.0, tReti = 0.0, tSaldo = 0.0;

    for(int j=1; j<i; j++)
    {
        printf("\n\t%d\t%.3f\t    %.3f\t%.3f",j,deposito[j],retiro[j],saldo[j]);
        tDepo += deposito[j];
        tReti += retiro[j];
        tSaldo += saldo[j];
    }

    printf("\nTOTALES\t\t%.3f\t   %.3f\t%.3f",tDepo,tReti,tSaldo);

    return 0;
}