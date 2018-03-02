#ifndef LISTA_ENLAZADAS_LISTAENLAZADA_H_
#define LISTA_ENLAZADAS_LISTAENLAZADA_H_

#include <iostream>
#include "Nodo.h"
typedef int Dato;

class ListaEnlazada
{
private:
	Nodo* cabeza;

public:
	ListaEnlazada();
	void push(Dato dato);
	void print();
};

#endif /* LISTA_ENLAZADAS_LISTAENLAZADA_H_ */
