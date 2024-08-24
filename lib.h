#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

// ESTRUCTURA DE UNA LISTA SIMPLEMENTE ENLAZADA.

//estructura de la fecha de nacimiento
typedef struct{
    int day,month,year;
}TFechan;

typedef struct{
    char nombre[30];
    char apellido[30];
    int dni;
    char dir[50];
    TFechan fechan;
}Item;

typedef struct nodo{

    //contenido del nodo
    Item elemento;
    //fin del contenido del nodo

    //evolución del puntero a un nodo siguiente
    struct nodo* siguiente; // Puntero al siguiente nodo
}TNodo;

// GENERAR UN NODO
TNodo * generarNodo(Item elementoX , TFechan fechan);
TNodo *crearLista();
void inserInicio(TNodo **cabeza, Item entrada);
void imprimirLista(TNodo * cabeza);
Item  levantarDatosPersona();



// INSERTAR AL PRINCIPIO DE LA LISTA
//void insertarAlPrincipioLSE(TNodo **L, int dato);
//
//// MOSTRAR LISTA
//void mostrarLista(TNodo *L);
//void mostrarListaRecursiva(TNodo *L);

#endif // LISTAS_H_INCLUDED
