#include<stdio.h>
#include<string.h>

void Menu(int *op){

    printf("*****************************************************");
    printf("\n1. Seleccionar producto");
    printf("\n2. Pagar y dar vuelto");
    printf("\n3. Salir");

    printf("\nSeleccione opcion: ");
    scanf("%d",op);
}

float SeleccionarProducto(){

    char opc;

    printf("*****************************************************");
    printf("\na. Cafe               S/. 1.00");
    printf("\nb. Cafe con leche     S/. 1.50");
    printf("\nc. Leche              S/. 2.00");

    printf("\nSeleccione opcion: ");
    scanf(" %c",&opc);

    if(opc == 'a' || opc == 'A'){

        return 1.0;
    }

    else
        if(opc == 'b' || opc == 'B'){

            return 1.5;
        }

        else return 2.0;
}

float IngresarMonto(float precio){

    float m;
    printf("Precio: %.2f\nMonto: ",precio);
    scanf("%f",&m);

    while(m < precio){

        printf("Monto insuficiente.\nIngrese un monto mayor o igual al preico indicado: ");
        scanf("%f",&m);
    }
    return m;
}

void ImprimirDatos(float p, float m, float v){

    char nombre[] = "cafe con leche";

    if((int)(p*2) == 2) strcpy(nombre,"cafe");
    else{

        if((int)(p*2) == 4){

            strcpy(nombre,"Leche");
        }
    } 

    printf("Usted compro %s de precio %.2f \nPago %.2f y su vuelto es %.2f\n",nombre,p,m,v);
}

int main(){

    int opcion;
    float precio, monto, vuelto;

    do{
        
        Menu(&opcion);

        if(opcion == 1){
            
            precio = SeleccionarProducto();
        }

        else
        
            if(opcion == 2){

                monto = IngresarMonto(precio);
                vuelto = monto - precio;

                ImprimirDatos(precio,monto,vuelto);
                
            }

    }while(opcion != 3);

    printf("Usted salio del menu");

    return 0;
}