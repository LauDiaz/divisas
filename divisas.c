//Taller de programación Semestre 2021-2
//Ejercicio de conversión de pesos mexicanos a libras, dólares o euros
//Valor de divisas al 25 de abril de 2021
#include <stdio.h>

int main(){

    int opc;
    float pesosMX;

    printf("*****Conversion de pesos mexicanos*****");
    printf("\n1) Libras esterlinas\n2) Dolares estadounidenses\n3) Euros");
    printf("\nA que divisa desea convertir?: ");
    scanf("%d", &opc);

    if(opc>=1 && opc<=3){
        printf("Su eleccion es: %d\n", opc);
        printf("Ingrese una cantidad en pesos mexicanos: ");
        scanf("%f", &pesosMX);
        printf("La cantidad ingresada es de: %.2f\n", pesosMX);
    }else printf("Opcion incorrecta\n");

    switch(opc){
        case 1:
            printf("%.2f pesos mexicanos es igual a %.2f libras esterlinas\n", pesosMX, pesosMX/27.52);
            break;
        case 2:
            printf("%.2f pesos mexicanos es igual a %.2f dolares estadounidenses\n", pesosMX, pesosMX/19.84);
            break;
        case 3:
            printf("%.2f pesos mexicanos es igual a %.2f euros\n", pesosMX, pesosMX/24.00);
            break;
    }

    return 0;
}