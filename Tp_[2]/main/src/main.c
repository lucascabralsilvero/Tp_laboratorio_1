/*
 ============================================================================
 Name        : Trabajo Práctico 2
 Author      : Lucas Cabral Silvero
 Version     : 1.0 (Final)
 Copyright   : Your copyright notice
 Description : Trabajo Práctico 2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include "arrayEmployees.h"
#include "validaciones.h"

#define LENEMP 1000
#define LENSEC 5

int main()
{
	setbuf(stdout,NULL);

    char continuar='s';
    char confirmar;
    char requestedName[51];
    char requestedLastName[51];
    float requestedSalary;
    int requestedRandomId;
    int requestedSector;
    int emptySpace;
    int contadorReintentos;
    int contadorEmpleados=0;
    int validacionNombre=0;
    int validacionApellido=0;
    int validacionSueldo=0;
    int validacionElegirSector=0;

    Employee employees[LENEMP];
    Sectors sectors[LENSEC];

    initEmployees(employees,LENEMP);
    hardcodeSectors(sectors,LENSEC);

    do
    {
        switch(mainMenu())
        {
        case 1:

            contadorReintentos=0;
            emptySpace=findEmptyIndex(employees,LENEMP);

            if(emptySpace>=0)
            {
                getRandomId(employees,LENEMP,&requestedRandomId);
                do
                {
                    validacionNombre=getString(requestedName,"Ingrese el nombre del empleado","Nombre invalido, cantidad de caracteres [min 2 - max 50]",2,50);

                    if(validacionNombre==-1)
                    {
                        contadorReintentos++;

                        if(contadorReintentos>2)
                        {
                            break;
                        }
                    }
                }
                while(validacionNombre==-1);
                if(validacionNombre!=-1)
                {
                    contadorReintentos=0;
                    do
                    {
                        validacionApellido=getString(requestedLastName,"Ingrese el apellido del empleado","Apellido invalido, cantidad de caracteres [min 2 - max 50]",2,50);

                        if(validacionApellido==-1)
                        {
                            contadorReintentos++;
                            if(contadorReintentos>2)
                            {
                                break;
                            }
                        }
                    }
                    while(validacionApellido==-1);
                }

                if(validacionNombre!=-1 && validacionApellido!=-1)
                {
                    contadorReintentos=0;
                    do
                    {
                        validacionSueldo=getFloat(&requestedSalary,"Ingrese el salario del empleado","Salario invalido, rango [min 1 - max 999999]",1,1000000);

                        if(validacionSueldo==-1)
                        {
                            contadorReintentos++;
                            if(contadorReintentos>2)
                            {
                                break;
                            }
                        }
                    }
                    while(validacionSueldo==-1);
                }

                if(validacionNombre!=-1 && validacionApellido!=-1 && validacionSueldo!=-1)
                {
                    do
                    {
                        validacionElegirSector=chooseSector(&requestedSector,"Elija sector al que pertenece el empleado","Opcion invalida, rango [1-5]",1,5,sectors,LENSEC);

                        if(validacionElegirSector==-1)
                        {
                            contadorReintentos++;
                            if(contadorReintentos>2)
                            {
                                break;
                            }
                        }
                    }
                    while(validacionElegirSector==-1);
                }

                if((validacionNombre!=-1) && (validacionApellido!=-1) && (validacionSueldo!=-1) && (validacionElegirSector!=-1))
                {
                    addEmployee(employees,LENEMP,requestedRandomId,requestedName,requestedLastName,requestedSalary,requestedSector,sectors,LENSEC);
                    contadorEmpleados++;
                }
                else
                {
                    printf("No se pudo validar al empleado..!\n\n");
                }
            }
            else
            {
                printf("No hay espacio para mas empleados..!!\n");
            }
            system("pause");
            break;

        case 2:
            if(contadorEmpleados>0)
            {
                modifyEmployee(employees,LENEMP,sectors,LENSEC);
            }
            else
            {
                printf("\nNo hay empleados para modificar!!\n\n");
            }
            system("pause");
            break;

        case 3:
            if(contadorEmpleados>0)
            {
                removeEmployee(employees,LENEMP,sectors,LENSEC);
                contadorEmpleados--;
            }
            else
            {
                printf("\nNo hay empleados para eliminar!!\n\n");
            }
            system("pause");
            break;

        case 4:
            if(contadorEmpleados>0)
            {
                reports(employees,LENEMP,sectors,LENSEC);
            }
            else
            {
                printf("\nNo hay empleados para informar!!\n\n");
            }
            system("pause");
            break;

        case 5:
            printf("Esta seguro que desea salir? s/n\n");
            fflush(stdin);
            confirmar=getche();

            if(tolower(confirmar)=='s')
            {
                continuar='n';
                printf("Programa finalizado..!\n");
                system("pause");
            }
            break;
        }
    }
    while(continuar=='s');

    return 0;
}

