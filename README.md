# Programa-de-circuitos
Estos programas están diseñados para poder calcular los voltajes y resistencias de un circuito eléctrico o también para poder calcular la resistencia de algún led 
//Elaborado por; Samuel Meléndez Bonilla
//En este programa se calcula la corriente eléctrica y el voltaje en cada resistencia
//Creado el 27/09/2020
#include <stdio.h>

int main (void)
{
    float Vs, I1, I2, I3, It; //Voltaje de la fuente y corriente
    int R1, R2, R3; //Valores de las 3 resistencias

    printf("Escribe el valor de la fuente Vs: ");
    scanf("%f",&Vs);

    printf("Escribe los valores de las 3 resistencias separados por coma: ");
    scanf("%d, %d, %d", &R1, &R2, &R3);

    It=((Vs/R1)+(Vs/R2)+(Vs/R3));
    I1=(Vs/R1);
    I2=(Vs/R2);
    I3=(Vs/R3);
    printf("El voltaje que pasa por cada resistencia es: %.2fV\n",Vs);//El voltaje que pasa por las resistencias es el mismo que la fuente cuando sea circuito paralelo
    printf("La corriente I1 es: %.2fA\n",I1);
    printf("La corriente I2 es: %.2fA\n",I2);
    printf("La corriente I3 es: %.2fA\n",I3);
    printf("La corriente total It es: %.2fA\n",It);

    return 0;
}


Ejercicio 2
//Elaborado por; Samuel Meléndez Bonilla
//En este programa se calcula la resistencia para cada led
//Creado el 27/09/2020
#include <stdio.h>

int main (void)
{
    float Vs, I, R; //Voltaje de la fuente y corriente

    printf("De los siguientes valores elige el voltaje y corriente para que muestre el valor de la resistencia\n");
    printf("\t\t      LED              V          I\n");
    printf("\t\tRojo std              1.5       0.015\n");
    printf("\t\tVerde std             1.8       0.015\n");
    printf("\t\tAmarillo std          1.8       0.015\n");
    printf("\t\tBlanco                2.8       0.02\n");
    printf("\t\tAmarillo brillante     2        0.02\n");
    printf("\t\tVerde brillante        3        0.02\n");
    printf("\t\tAzul brillante         3        0.02\n");
    printf("\t\tRojo brillante         2        0.02\n\n");

    printf("Escribe el valor del voltaje V: ");
    scanf("%f", &Vs);
    printf("Escribe el valor de la corriente I: ");
    scanf("%f", &I);

    R=Vs*I;

    printf("El valor de la resistencia para el LED es: %.4f Ohms\n",R);
    system ("PAUSE");

    return 0;
}

