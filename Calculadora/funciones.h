#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
    /** \brief Esta funcion calcula la suma de dos numeros enteros (x+y)
     *
     * \param Ingrese un numero entero
     * \param Devuelve un numero entero
     * \return Devuelve la suma de dos enteros.
     *
     */

int sumar (int,int);
/** \brief Esta funcion calcula la resta de dos numeros enteros (x-y)
 *
 * \param Se ingresa un numero entero.
 * \param Devuelve un numero entero.
 * \return Devuelve la resta de dos enteros.
 *
 */

int restar (int,int);
/** \brief Esta funcion calcula la multiplicacion de 2 numeros enteros (x*y)
 *
 * \param Ingrese un numero entero.
 * \param Devuelve un numero entero.
 * \return Devuelve la multiplicacion de ambos enteros.
 *
 */

long multiplicar (int,int);
/** \brief Esta funcion calcula la Division de 2 numeros enteros (x/y).
 *
 * \param Se ingresa un numero entero
 * \param Devuelve un numero entero
 * \return Devuelve la division de 2 enteros.
 *
 */

float dividir (int,int);
/** \brief Esta funcion calcula el factorial de 1 numero (x) o (y)
 *
 * \param Se ingresa un numero entero
 * \param Devuelve un numero entero
 * \return Solo se puede averiguar con esta funcion hasta el factor n°7
 *  / Si intentamos dividir 2 numeros que sean 0 nos dara error , ingrese otro numero
 */

long factorial (int);
/** \brief En esta opcion elegimos un numero para X y otro para Y
 *
 * \param Nos devolvera la suma,resta,multiplicacion y division
 * \param
 * \return Luego nos dara el resultado  suma,resta,multiplicacion,division y el factorial
 *
 */

void todasLasOp (int,int);
int validarRango(int,int,int);

#endif // FUNCIONES_H_INCLUDED
