/*
 * operaciones.c
 *
 *  Created on: 22 sep. 2021
 *      Author: Lucas Cabral Silvero
 */

#include <stdio.h>
#include "operaciones.h"

//Función sumar;

int sumar(int operando1, int operando2, int* pSuma)
{

    int retorno= -1;

    if(pSuma != NULL)
    {
    *pSuma= operando1 + operando2;
    retorno=0;
    }

    return retorno;
}

// Función restar;

int restar(int operando1, int operando2, int* pResta)
{

    int retorno= -1;

    if(pResta != NULL)
    {
    *pResta= operando1 - operando2;
    retorno=0;
    }

    return retorno;
}


// Función Multiplicar;

int multiplicar(int operando1, int operando2, int* pMultiplicacion)
{

    int retorno= -1;

    if(pMultiplicacion!= NULL)
    {
    *pMultiplicacion= operando1 * operando2;
    retorno=0;
    }

    return retorno;
}


// Función dividir;

float dividir(int operando1, int operando2, float* pDivision)
{

    int retorno= -1;

    if(pDivision != NULL && operando2 != 0)
    {
    *pDivision= (float)operando1 / operando2;
    retorno=0;
    }

    else
    {
        printf("No se puede dividir por 0");
    }

    return retorno;
}


// Función factorial;

double factorizar(int operando1,double* pFactorial)
{
    int retorno= -1;
    double factorialAux=1;

    if(pFactorial != NULL && operando1 != 0)
    {
        for (int i = operando1; i > 0 ; i--)
        {
            factorialAux*=i;
        }

        *pFactorial= factorialAux;
        retorno= 0;
    }

    return retorno;

}
