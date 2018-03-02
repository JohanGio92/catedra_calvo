#ifndef LISTA_ENLAZADAS_NODO_H_
#define LISTA_ENLAZADAS_NODO_H_
typedef int Dato;

class Nodo {
private:
	Dato dato;
	Nodo* siguiente;
public:
	Nodo(Dato dato);
	virtual ~Nodo();
	void setDato(Dato dato);
	Dato getDato();
	void setSiguiente(Nodo* s);
	Nodo* getSiguiente();
};

#endif
