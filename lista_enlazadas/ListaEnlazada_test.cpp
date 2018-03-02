#include "ListaEnlazada.h"

int main()
{
	ListaEnlazada *lista = ListaEnlazada::numeroEntero();
	lista->push(5);
	lista->push(6);
	lista->print();
	return 0;
}

