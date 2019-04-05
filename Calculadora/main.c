#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int x=0;
    int y=0;
    system("title § Calculadora §");
    system("mode con: cols=56 lines=30");
    system("color 1b");

    do
    {
        system("cls");
        printf("____________________________________________________");
        printf("____________________________________________________\n");
        printf("\tA=%d\t\tB=%d\n", x, y);
        printf("____________________________________________________\n");
        printf("\t1- Ingresar 1er operando (A=x)\n");
        printf("\t2- Ingresar 2do operando (B=y)\n");
        printf("\t3- Calcular la suma (A+B)\n");
        printf("\t4- Calcular la resta (A-B)\n");
        printf("\t5- Calcular la division (A/B)\n");
        printf("\t6- Calcular la multiplicacion (A*B)\n");
        printf("\t7- Calcular el factorial (A!)\n");
        printf("\t8- Calcular todas las operaciones\n");
        printf("\t9- Salir\n");
        printf("____________________________________________________\n");
        printf(" Ingrese una opcion: ");
        scanf("%d",&opcion);

        while(!validarRango(opcion,1,9))
        {
            printf("\n Error. Ingrese una opcion: ");
            scanf("%d", &opcion);
        }
        switch(opcion)
        {
        case 1:
            printf("\nIngrese primer numero: ");
            scanf("%d", &x);
            break;
        case 2:
            printf("\nIngrese segundo numero: ");
            scanf("%d", &y);
            break;
        case 3:
            printf("\nLa suma de los operandos da: %d\n\n",sumar(x,y));
            system("pause");
            break;
        case 4:
            printf("\nLa resta de los operandos da: %d\n\n",restar(x,y));
            system("pause");
            break;
        case 5:
            if(y==0)
            {
                printf("\nEl divisor no puede ser cero.\nIngrese otro numero.\n\n");
            }
            else
            {
                printf("\nLa division de los operandos da: %.2f\n\n",dividir(x,y));
            }
            system("pause");
            break;
        case 6:
            printf("\nLa multiplicacion de los operandos da: %d\n\n",multiplicar(x,y));
            system("pause");
            break;
        case 7:
            if(x<0)
            {
                printf("\nNo hay factorial de numeros negativos.\nIngrese otro numero.\n\n");
            }
            else if(x>12)
            {
                printf("\nError. Resultado muy grande para la calculadora.\n\n");
            }
            else
            {
                printf("\nEl factorial del numero: %d es: %li\n\n",x,factorial(x));
            }
            system("pause");
            break;
        case 8:
            todasLasOp(x,y);
            system("pause");
            break;
        case 9:
            seguir = 'n';
            break;
        default:
            break;
        }
    }
    while(seguir=='s');
    return 0;
}
