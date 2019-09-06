// Implementaci�n de la biblioteca "matematica". Tiene funciones para sumar, restar, dividir,
// multiplicar y calcular el factorial.

#include "matematica.h"

/*
* Suma dos n�meros float.
*
* param x: primer operando.
* param y: segundo operando.
* return:  variable resultado. resultado de la suma.
*/
float suma(float x, float y)
{
    float resultado;

    resultado = x + y;

    return resultado;
}

/*
* Resta dos n�meros float.
*
* param x: minuendo.
* param y: sustraendo.
* return:  variable resultado. resultado de la resta.
*/
float resta(float x, float y)
{
    float resultado;

    resultado = x - y;

    return resultado;
}

/*
* Divide un float por otro. Si el divisor es 0 no realiza la divisi�n.
*
* param x: dividendo.
* param y: divisor.
* return:  variable resultado. resultado de la divisi�n. Si el divisor es 0, no se inicializa la variable.
*/
float division(float x, float y)
{
    float resultado;

    if (y != 0)
    {
        resultado = x / y;
    }

    return resultado;
}

/*
* Multiplica dos n�meros float.
*
* param x: primer factor.
* param y: segundo factor.
* return:  variable resultado. resultado de la multiplicaci�n.
*/
float multiplicacion(float x, float y)
{
    float resultado;

    resultado = x * y;

    return resultado;
}

/*
* Calcula el factorial de un n�mero float. Lo convierte en int, y si es decimal no toma en cuenta
* los d�gitos despu�s del punto. Si el n�mero es negativo (porque no se puede calcular el factorial
* de un negativo) o 0 o 1 (porque da como resultado 1) no realiza la operaci�n.
*
* param x: n�mero del cual se calcular� el factorial.
* return:  variable resultado. resultado de la operaci�n. Si x es 0 o 1, el resultado ser� 1.
* Si x es negativo tambi�n, pero el resultado no es v�lido.
*/
int factorial(float x)
{
    int resultado;
    x = (int)x;
    resultado = 1;
    if (x >= 0)
    {
        if ((x != 0) && (x != 1))
        {
            for(int i = 1; i < x; i++)
            {
                resultado = resultado * (i + 1);
            }
        }
    }

    return resultado;
}



