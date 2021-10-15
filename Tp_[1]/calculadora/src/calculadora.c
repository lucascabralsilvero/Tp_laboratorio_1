/*
 ============================================================================
 Name        : calculadora.c
 Author      : Lucas Cabral Silvero
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{

	setbuf(stdout,NULL);

    int num1;
    int num2;
    int flagNum1=0;
    int flagNum2=0;
    int flagCalculos=0;
    int flagMostrar=0;
    int opcion;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    double resultadoFactorialNum1;
    double resultadoFactorialNum2;


    char seguir = 's';


   do {

   system("cls");


printf("\tCALCULADORA    \n");
printf("\t************\n");


        if(flagNum1==0)
        {
        	printf("1. Ingrese el 1er operando A=x:\n");
        }
        else
        {
        	printf("1. Ingrese el 1er operando A=%d\n",num1);
        }
        if(flagNum2==0)
        {
        	printf("2. Ingrese el 2do operando A=x:\n");
        }
        else
        {
        	printf("2. Ingrese el 2do operando A=%d\n",num2);
        }

        printf("3. Calcular todas las operaciones: \n");

        switch(flagCalculos)
        {
        case 0:
                printf("\ta- Calcular la suma (A+B)\n");
                printf("\tb- Calcular la resta (A-B)\n");
                printf("\tc- Calcular la division (A/B)\n");
                printf("\td- Calcular la multiplicacion (A*B)\n");
                printf("\te- Calcular el factorial (A!) y (B!)\n");
                break;
        case 1:
                printf("\ta- Calcular la suma (%d)+(%d)\n",num1,num2);
                printf("\tb- Calcular la resta (%d)-(%d)\n",num1,num2);
                printf("\tc- Calcular la division (%d)/(%d)\n",num1,num2);
                printf("\td- Calcular la multiplicacion (%d)*(%d)\n",num1,num2);
                printf("\te- Calcular el factorial (%d!)y(%d!)\n",num1,num2);
                break;
        case 2:
                printf("\ta-La suma fue calculada con exito! \n");
                printf("\tb-La resta fue calculada con exito!\n");

                //valido division;

                if(num2==0)
                {
                    printf("\tc-No se puede dividir por 0!\n");
                }
                else
                {
                    printf("\tc-La division fue calculada con exito!\n");
                }

                printf("\td-La multiplicacion se calculo con exito!\n");

                //valido factoriales;

                if(num1>=0 && num2>=0)
                {
                    printf("\te-Los factoriales de %d! y %d! fueron calculados con exito!\n",num1,num2);
                }
                else
                {
                    if(num1<0 && num2<0)
                    {
                        printf("\te-Los factoriales de %d! y %d! no deben ser menor a 0!\n",num1,num2);
                    }
                    else
                    {
                        if(num1<0 && num2>=0)
                        {
                            printf("\te-El factorial de %d! no debe ser menor a 0! - El factorial de %d! se calculo con exito\n",num1,num2);
                        }
                        else
                        {
                            printf("\te-El factorial de %d! se calculo con exito! - El factorial de %d! no debe ser menor a 0!\n",num1,num2);;
                        }
                    }
                }
                break;
        }

        printf("4:Informar resultados:\n");

         if(flagMostrar==1)
        {
            printf("\ta- El resultado de (%d)+(%d) es: %d\n",num1,num2,resultadoSuma);
            printf("\tb- El resultado de (%d)-(%d) es: %d\n",num1,num2,resultadoResta);

            if(num2==0)
            {
                printf("\tc- No se puede dividir por cero!\n");
            }
            else
            {
                printf("\tc- El resultado de (%d)/(%d) es: %.2f\n",num1,num2,resultadoDivision);
            }
            printf("\td- El resultado de (%d)*(%d) es: %d\n",num1,num2,resultadoMultiplicacion);

            if(num1>=0 && num2>=0)
            {
                printf("\te- El factorial de %d es: %.0f y el factorial de %d es: %.0f\n",num1,resultadoFactorialNum1,num2,resultadoFactorialNum2);
            }
            else
            {
                if(num1<0 && num2<0)
                {
                    printf("\te- El factorial de %d y el factorial de %d no se calcularon por ser numeros negativos\n", num1, num2);
                }
                else
                {
                    if(num1<0 && num2>=0)
                    {
                        printf("\te- El factorial de %d no se pudo calcular por ser negativo y el factorial de %d es: %.0f\n",num1,num2,resultadoFactorialNum2);
                    }
                    else
                    {
                        printf("\te- El factorial de %d es: %.0f y el factorial de %d no se pudo calcular por ser negativo\n",num1,resultadoFactorialNum1,num2);
                    }
                }
            }
        }
        else
        {
            printf("\ta- El resultado de A+B es: r\n");
            printf("\tb- El resultado de A-B es: r\n");
            printf("\tc- El resultado de A/B es: r\n");
            printf("\td- El resultado de A*B es: r\n");
            printf("\te- El factorial de A es: r1 y El factorial de B es: r2\n");
        }
        printf("5. Salir\n");
        printf("6. Ingresar nuevos datos\n\n");

        printf("Ingrese una opcion:");
        scanf("%d",&opcion);



         switch(opcion)
        {
            case 1:
                printf("Ingrese el 1er operando:");
                scanf("%d", &num1);
                flagNum1=1;
                    if(flagNum2==1)
                    {
                        flagCalculos=1;
                    }
                break;
            case 2:
                printf("Ingrese el 2do operando:");
                scanf("%d", &num2);
                flagNum2=1;
                    if(flagNum1==1)
                    {
                        flagCalculos=1;
                    }
                break;
            case 3:

                //valido que hayan ingresado los numeros

                if(flagNum1==0 && flagNum2==0)
                {
                    printf("ERROR, Debe ingresar el 1er y el 2do operando  para continuar\n\n");
                    system("pause");
                    break;
                }
                    if(flagNum1==0)
                    {
                        printf("ERROR, Debe ingresar el 1er operando  para continuar\n\n");
                        system("pause");
                        break;
                    }
                    else
                    {
                        if(flagNum2==0)
                        {
                            printf("ERROR, Debe ingresar el 2do operando para continuar\n\n");
                            system("pause");
                            break;
                        }
                    }

                //Si fueron ingresados, realizo los calculos correspondientes haciendo uso de punteros;

                sumar(num1,num2, &resultadoSuma);
                restar(num1,num2, &resultadoResta);
                dividir(num1,num2,&resultadoDivision);
                multiplicar(num1,num2,&resultadoMultiplicacion);
                factorizar(num1,&resultadoFactorialNum1);
                factorizar(num2,&resultadoFactorialNum2);

                //Cambio el flag a 2 cuando las operaciones fueron calculadas;
                flagCalculos=2;

                break;
            case 4:

                if(flagCalculos!=2)
                {
                   printf("Hay que calcular los resultados antes de mostrar!!\n\n");
                   system("pause");
                   break;
                }
                else
                {
                   flagMostrar =1;
                }
                break;

            case 5:
                printf("El programa ha finalizado\n\n");
                seguir='n';
                system("pause");
                break;
            case 6:
                num1=0;
                num2=0;
                flagNum1=0;
                flagNum2=0;
                flagCalculos=0;
                flagMostrar =0;
                break;
            default:
                printf("\tLa opcion ingresada no es válida\n");
                system("pause");
                break;
        }
    } while(seguir=='s');
    //end loop

    return 0;



}
