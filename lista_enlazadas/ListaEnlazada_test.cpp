#include "ListaEnlazada.h"

int main()
{
	ListaEnlazada *lista = new ListaEnlazada();
	lista->push(5);
	lista->push(6);
	lista->print();
	return 0;
}

