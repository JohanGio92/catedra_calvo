#include "ListaEnlazada.h"
#include "Nodo.h"
typedef int Dato;
#include <iostream>

ListaEnlazada::ListaEnlazada()
{
	cabeza = nullptr;
}

void ListaEnlazada::push(Dato dato)
{
	if(cabeza == nullptr)
		cabeza = new Nodo(dato);
	else{
		Nodo *temporal = cabeza;
		while(temporal->getSiguiente() != nullptr)
			temporal = temporal->getSiguiente();

		Nodo *nuevoNodo = new Nodo(dato);
		temporal->setSiguiente(nuevoNodo);
	};
};

void ListaEnlazada::print()
{
	Nodo *temporal = cabeza;

	while(temporal->getSiguiente() != nullptr){
		std::cout << temporal->getDato() << "->";
		temporal = temporal->getSiguiente();
	}
	std::cout << temporal->getDato() << std::endl;

};

