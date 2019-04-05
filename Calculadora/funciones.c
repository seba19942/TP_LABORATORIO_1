
int sumar(int x, int y)
{
    int resultado;
    resultado= x+y;
    return resultado;
}

int restar(int x, int y)
{
    int resultado;
    resultado= x-y;
    return resultado;
}

long multiplicar(int x, int y)
{
    long resultado;
    resultado= x*y;
    return resultado;
}

float dividir (int x, int y)
{
    float resultado;
    resultado= (float)x/y;
    return resultado;
}

long factorial(int x)
{
    long resultado;
    if(x==0)
    {
        resultado=1;
    }
    else
    {
        resultado=x*factorial(x-1);
    }
    return resultado;
}

void todasLasOp(int x, int y)
{
    printf("\n");
    printf("La suma de los operandos da: %d\n",sumar(x,y));
    printf("La resta de los operandos da: %d\n",restar(x,y));
    if(y==0)
    {
        printf("Division imposible.\nEl divisor no puede ser cero.\n");
    }
    else
    {
        printf("La division de los operandos da: %.2f\n",dividir(x,y));
    }
    printf("La multiplicacion de los operandos da: %d\n",multiplicar(x,y));
    if(x<0)
    {
        printf("Factoreo imposible.\nEl numero no puede ser menor a cero.\n");
    }
    else if(x>12)
    {
        printf("Error. Resultado muy grande para la calculadora.\n");
    }
    else
    {
        printf("El factorial de %d da: %li\n",x,factorial(x));
    }
    printf("\n");
}

int validarRango(int opcion, int desde, int hasta)
{
    int resultado=0;
    if((opcion>=desde)&&(opcion<=hasta))
    {
        resultado= 1;
    }
    return resultado;
}
