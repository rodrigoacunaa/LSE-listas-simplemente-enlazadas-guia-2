#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

// GENERAR UN NODO
TNodo * generarNodo(Item elementoX , TFechan fechan){
    //Generamos un nuevo nodo y lo asignamos a un espacio libre en memoria dinámica
    TNodo * nuevoNodo;
    //"nuevoNodo" (el nodo generado) es asignado a un espacio libre
    //de memoria dinámica con memory allocation "malloc" y el tamaño de la estructura del nodo
    nuevoNodo = malloc(sizeof(TNodo));

    //captura de datos de la lista
    strcpy(nuevoNodo->elemento.nombre,elementoX.nombre);
    strcpy(nuevoNodo->elemento.apellido,elementoX.apellido);
    nuevoNodo->elemento.dni = elementoX.dni;
    strcpy(nuevoNodo->elemento.dir,elementoX.dir);

    //captura de los datos de la estructura de fecha
    nuevoNodo->elemento.fechan.day=fechan.day;
    nuevoNodo->elemento.fechan.month=fechan.month;
    nuevoNodo->elemento.fechan.year=fechan.year;

    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}

TNodo *crearLista(){
    TNodo * cabeza=NULL;
    return cabeza;
}

//Insertar al inicio
void inserInicio(TNodo **cabeza, Item entrada){
    TNodo * nuevo;
    nuevo=generarNodo(entrada, entrada.fechan);
    nuevo->siguiente= *cabeza;
    *cabeza=nuevo;
}

//imprimir lista
void imprimirLista(TNodo * cabeza){
    TNodo * actual;
    printf("La lista es:\n");
    for(actual=cabeza; actual!=NULL ; actual=actual->siguiente){
        printf("-----------------------------\n");
        printf("NOMBRE: %s\n", actual->elemento.nombre);
        printf("APELLIDO: %s\n", actual->elemento.apellido);
        printf("DNI: %d\n", actual->elemento.dni);
        printf("DIRECCION: %s\n", actual->elemento.dir);
        printf("FECHA DE NACIMIENTO:\n");
        printf("DIA: %d\n", actual->elemento.fechan.day);
        printf("MES: %d\n", actual->elemento.fechan.month);
        printf("ANIO: %d\n", actual->elemento.fechan.year);

        printf("-----------------------------\n");
        printf("\n\n");

    }
}

Item levantarDatosPersona(){
    Item  nuevaPersona;
    printf("Ingrese su nombre: \n");
    fflush(stdin);
    gets(nuevaPersona.nombre);

    printf("Ingrese su apellido \n");
    fflush(stdin);
    gets(nuevaPersona.apellido);

    printf("Ingrese su dni \n");
    fflush(stdin);
    scanf("%d",&nuevaPersona.dni);

    printf("Ingrese su direccion \n");
    fflush(stdin);
    gets(nuevaPersona.dir);

    printf("Ingrese su fecha de nacimiento (DD MM YY) \n");
    system("pause");
    printf("DIA \n");
    fflush(stdin);
    scanf("%d",&nuevaPersona.fechan.day);

    printf("MES \n");
    fflush(stdin);
    scanf("%d",&nuevaPersona.fechan.month);

    printf("ANIO \n");
    fflush(stdin);
    scanf("%d",&nuevaPersona.fechan.year);

    return nuevaPersona;
}



// INSERTAR AL PRINCIPIO DE L ALISTA
//void insertarAlPrincipioLSE(TNodo **L, int dato){
//    TNodo * nuevo = generarNodoLSE(dato);
//    if( *L == NULL){ // LISTA VACIA
//        *L = nuevo;  // ASIGNAMOS EL PRIMER ELEMENTO DE LA LISTA
//    }else{           //INSERTA AL PRINCIPIO DE LA CABEZA SIEMPRE.
//        nuevo->sig = *L;
//        *L = nuevo;
//    }
//}

//void inserInicio(TNodo **cabeza, ){
//
//}

//void insertarAlPrincipioLSEEficiente(TNodo **L, int dato){
//    TNodo * nuevo = generarNodoLSE(dato);
//    if( *L != NULL)//{ // SI LA LISTA NO ESTA VACIA
//        nuevo->sig = *L;
//    //}
//    *L = nuevo;
//}

// MOSTRAR LISTA
//void mostrarLista(TNodo *L){ //No esta por referencia porque no lo vamos a modificar por eos no lleva doble **.
//    TNodo * paux = L;
//    while(paux != NULL){
//        printf("%d", paux->dato);
//        paux = paux->sig;
//    }
//}

// MOSTRAR LISTA ALTERNATIVA
//void mostrarListaEficiente(TNodo *L){ //No esta por referencia porque no lo vamos a modificar por eso no lleva doble **.
//    while(L != NULL){
//        printf("%d", L->dato);
//        L = L->sig;
//    }
//}
//
//void mostrarListaRecursiva(TNodo * L){
//   if( L != NULL ){
//        mostrarListaRecursiva(L->sig);
//        printf("%d", L->dato);
//   }
//}
