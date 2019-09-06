// Calculadora. Realiza cinco operaciones en dos operandos enteros ingresados por el usuario e
// imprime los resultados. Usa la biblioteca matematica.h.

#include <stdio.h>
#include "matematica.h"

int main(void)
{
    // Declaraci�n de variables y toma de los operandos.

    float a;                    // Primer operando ingresado por el usuario.
    float b;                    // Segundo operando ingresado por el usuario.
    float resSuma;              // Return de la funci�n suma.
    float resResta;             // Return de la funci�n resta.
    float resDivision;          // Return de la funci�n division.
    float resMultiplicacion;    // Return de la funci�n multiplicacion.
    int resFactorialA;          // Return de la funci�n factorial para el primer operando.
    int resFactorialB;          // Return de la funci�n factorial para el segundo operando.

    printf("Ingrese el primer operando.\n");
    scanf("%f", &a);
    printf("\nIngrese el segundo operando.\n");
    scanf("%f", &b);

    // Ejecuci�n de las funciones matem�ticas. Devuelven un resultado que se guarda en una variable.

    resSuma = suma(a, b);
    resResta = resta(a, b);
    resDivision = division(a, b);
    resMultiplicacion = multiplicacion(a, b);
    resFactorialA = factorial(a);
    resFactorialB = factorial(b);

    // Se muestran los resultados, con dos decimales. Si se intenta dividir por 0, calcular el factorial de un negativo,
    // o calcular el factorial de un n�mero mayor que 12 (por el tama�o de los int), se indica que
    // no se puede realizar la operaci�n.

    printf("\nEl resultado de %.2f + %.2f es: %.2f\n", a, b, resSuma);

    printf("El resultado de %.2f - %.2f es: %.2f\n", a, b, resResta);

    if (b != 0)
    {
        printf("El resultado de %.2f / %.2f es: %.2f\n", a, b, resDivision);
    }
    else
    {
        printf("No es posible dividir por cero.\n");
    }

    printf("El resultado de %.2f * %.2f es: %.2f\n", a, b, resMultiplicacion);

    if (a >= 0)
    {
        if (a < 13)
        {
            printf("El factorial de %d es: %d", (int)a, resFactorialA);
        }
        else
        {
            printf("Factoriales de numeros mayores que 12 resultan en error");
        }
    }
    else
    {
        printf("No se puede calcular el factorial de un negativo");
    }
    if (b >= 0)
    {
        if (b < 13)
        {
            printf(" y el factorial de %d es: %d.\n\n", (int)b, resFactorialB);
        }
        else
        {
            printf(" y factoriales de numeros mayores que 12 resultan en error.\n\n");
        }
    }
    else
    {
        printf(" y no se puede calcular el factorial de un negativo.\n\n");
    }
}
