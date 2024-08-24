#include <stdio.h>
#include <stdlib.h>
#include "lib.c"

///Listas simplemente enlazadas.

/*
*   Autor: Acuña Rodrigo
*   Fecha: 25/08/2023
*   Lenguaje: C
*   Propósito: Ejemplo simple de Listas
*   Descripción: Inserta de forma ordenada y muestra una lista simplemente enlazada de caracteres
*
*/

//Tarea realizar un mostrar lista de manera recursiva.
//Para que sea recursiva se tiene que cumplir
// 1 - El punto de corte.
// 2 - Evolucion al punto de corte
// 3 - Llamada a si mismo. (Llamada Recursiva)

int main()
{
    printf("LISTAS SIMPLEMENTE ENLAZADAS\n");
    int op,i,input;
    TNodo *cab = crearLista();//definimos una lista vacía

    printf("Seleccione una opcion:\n");
    printf("1) Crear una lista de personas y cargarlas\n");
    fflush(stdin);
    scanf("%d",&op);
    do{
        switch(op){
            case 1:

                printf("Ingrese la cantidad de personas a cargar:\n");
                fflush(stdin);
                scanf("%d",&input);

                for(i=0;i<input;i++){
                    Item nuevaPersona= levantarDatosPersona();
                    inserInicio(&cab, nuevaPersona);
                }
                imprimirLista(cab);


                //insertarListaOrdenado(&L, leerChar());
                break;
            case 2:
                //mostrarLista(L);
                break;
            case 0:
                printf("\nHasta Luego\n");
                break;
            default:
                break;
        }
    }while(op!=0);

    //L = generarNodoLSE(4);
    //printf("%d",L->dato);
//    insertarAlPrincipioLSE(&L, 3);
//    insertarAlPrincipioLSE(&L, 5);
//    insertarAlPrincipioLSE(&L, 8);
//    insertarAlPrincipioLSE(&L, 20);
//    //mostrarLista(L);
//    //mostrarListaEficiente(L);
//
//    mostrarListaRecursiva(L);

    return 0;
}
