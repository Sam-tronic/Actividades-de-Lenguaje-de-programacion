//Elaborado por: Samuel Meléndez Bonilla

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
int main()
{
    int o=0;
    int op;
    char c;
    setlocale(LC_ALL, "");
    while (o==0){
    printf("\n Hola, Soy el Alumno Samuel del 4-B MAAU y este es mi programa\n ");
    printf("\tMenú de programas\n");
    printf("\t1.Programa de secuencia triangular\n");
    printf("\t2.Programa que calcula el valor de pi\n");
    printf("\t3.Programa de Secuencias\n");
    printf("\t4.Salir\n");
    puts("\n---------------------------------------");
    printf("Elige una opción: ");
    scanf("%d", &op);
    system ("cls");
    if (op==1)
        {
    int r, e, a;
    int na=1; //Es el numero de asteriscos a imprimir
    int ne=4; //Es el numero de espacios a imprimir
    int ia=2; //Es el incremento de asteriscos a imprimir
    int ie=-1; //Es el incremento de espacios a imprimir
        printf ("A)\n");
    for (r=1;r<=10;r++)
    {
        for (a=1;a<=r;a++)
        {
            printf ("*");
        }
        printf ("\n");
    }
        printf ("B)\n");
    for (r=1;r<=10;r++)//Son los renglones renglones
    {
        for (a=r;a<=10;a++)//Son los asteriscos
        {
            printf ("*");
        }
        printf ("\n");
    }
        printf ("C)\n");
    for (r=1;r<=10;r++)//Son los renglones
    {
        for (e=2;e<=r;e++)//Son los espacios
        {
            printf (" ");
        }
        for (a=10;a>=r;a--)//Son los asteriscos
        {
            printf ("*");
        }
        printf ("\n");
    }
        printf ("D)\n");
    for (r=1;r<=10;r++)//Son los renglones
    {
        for (e=9;e>=r;e--) //Son los espacios
        {
            printf(" ");
        }
        for (a=1;a<=r;a++)
        {
            printf("*");
        }
        printf ("\n");
    }
        }
    else if (op==2)
    {
      int i,v , j = 1;
      double pi = 0, rtdo;
      printf("\t Por favor ingrese el número de valores:\n ");
      scanf("%d",&v);

      for (i = 0; i < v; i++){
          rtdo = 4 / (double)j;

               if (i % 2 == 1)
                  pi -= rtdo;
               else
                   pi += rtdo;
          j += 2;
      }
      printf("\t El valor de Pi es: %.16f\n", pi);
    }
    else if (op==3)
    {
        int y=0;
        char p='s';
        while (p!='n' && p!='N')
    	{
        int x=0,a=1,b=2,c=30,d=15;
		printf("\t POR FAVOR INGRESE EL NUMERO DE CIFRAS QUE DESEA EJECUTAR: \n");
        scanf("%i",&x);
           printf("\t N: A     B      C      D \n");
		for(y=1;y<=x;y++)
		{
			printf("\t %d: %d     %d     %d     %d \n",y,a,b,c,d);
			a=a+2;
			b=b+3;
			c=c-10;
			d=d+8;
		}
		printf("\t MUY BIEN, ¿DESEA INTENTARLO DE NUEVO? [S/N]: ");
            scanf("%s",&p);
            system("cls");
	}
    }
    else if (op==4)
    {
        exit(-1);
    }
    else
    {
        printf("\t LO SIENTO NO ES UNA OPCIÓN CORRECTA, POR FAVOR INTENTA DE NUEVO\n");
    }
    printf("\t ¿Te gustaria regresar al menu? [S/N]: ");
        scanf("%s", &c);
        if(c=='s'||c=='S')
        {
            c=0;
        }
        else if(c=='n'||c=='N')
        {
            system("cls");
            printf("\t ¡GRACIAS POR PROBAR MI PROGRAMA, ADIOS!");
            exit(-1);
        }
        system("cls");
    }
    return 0;
}
