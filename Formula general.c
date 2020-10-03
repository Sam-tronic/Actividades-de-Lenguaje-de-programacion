#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C,x1,x2,Disc;

    printf("Resolucion de la ecuación AX2 + B + C=0 \n");
    printf("\n Escribe los valores de A, B, C\n");
    printf("A=");
    scanf("%lf",&A);
    printf("B=");
    scanf("%lf",&B);
    printf("C=");
    scanf("%lf",&C);

    if (A==0)
    {
        printf("\nError,algun valor no es correcto\n");

    }
    else{
        Disc=B*B-4*A*C;
        if(Disc>0){
            x1=(-B+sqrt(Disc))/(2*A);
            x2=(-B-sqrt(Disc))/(2*A);
            printf("\nSolucion x1 = %lf",x1);
            printf("\nSolucion x2 = %lf",x2);
        }else

        if(Disc==0){
        x1=(-B)/(2*A);
        printf("\nSolucion doble = %lf",x1);
    }else{
        printf("\nHubo un error: raiz imaginaria");
    }

    }
}
