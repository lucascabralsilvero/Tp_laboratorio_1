/*
 * operaciones.h
 *
 *  Created on: 22 sep. 2021
 *      Author: Lucas Cabral Silvero
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/**
 * \brief Realiza la operacion matematica Suma.
 * \param float operando1, primer operando.
 * \param float operando2, segundo operando.
 * \param float *pSuma, puntero en donde se guarda el resultado de la operacion.
 * \return (-1) ERROR (0) EXITO
 */
int sumar(int operando1, int operando2, int* pSuma);
/**
 * \brief Realiza la operacion matematica Resta.
 * \param float operando1, primer operando.
 * \param float operando2, segundo operando.
 * \param float *pResta, puntero en donde se guarda el resultado de la operacion.
 * \return (-1) ERROR (0) EXITO
 */
int restar(int operando1, int operando2, int* pResta);
/**
 * \brief Realiza la operacion matematica Multiplicacion.
 * \param float operando1, primer operando.
 * \param float operando2, segundo operando.
 * \param float *pMultiplicacion, puntero en donde se guarda el resultado de la operacion.
 * \return (-1) ERROR (0) EXITO
 */
int multiplicar(int operando1, int operando2, int* pMultiplicacion);
/**
 * \brief Realiza la operacion matematica Division.
 * \param float operando1, primer operando.
 * \param float operando2, segundo operando.
 * \param float *pdivision,  puntero en donde se guarda el resultado de la operacion.
 * \return (-1) ERROR (0) EXITO
 */
float dividir(int operando1, int operando2, float* pDivision);
/**
 * \brief Realiza la operacion matematica Factorial.
 * \param float operando1, primer operando.
 * \param float operando2, segundo operando.
 * \param float *pFactorial,  puntero en donde se guarda el resultado de la operacion.
 * \return (-1) ERROR (0) EXITO
 */
double factorizar(int operando1,double* pFactorial);

#endif /* OPERACIONES_H_ */
