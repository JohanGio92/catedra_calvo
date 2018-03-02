#include "Nodo.h"

Nodo::Nodo(Dato dato)
{
	this->dato = dato;
	siguiente = nullptr;
}

Nodo::~Nodo()
{
}

void Nodo::setDato(Dato dato)
{
	this->dato = dato;
}

Dato Nodo::getDato()
{
	return dato;
}

void Nodo::setSiguiente(Nodo* s)
{
	siguiente = s;
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}
