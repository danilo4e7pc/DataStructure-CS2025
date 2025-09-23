#include "lista_enlazada.h"

int main() {

    // Crear la lista en el heap, es necesario hacer un "delete"
    //Lista* lista = new Lista();
    //lista->insertarInicio(10); //modo de uso "->"

    // Crear la lista en el Stack, solo persiste en el ambito {}
    Lista lista;


    lista.insertarInicio(20); //modo de uso "."
    lista.insertarInicio(10);
    lista.insertarFinal(30);
    lista.insertarFinal(40);

    lista.AdicionarEnOrden(25);
    lista.imprimir();

    // Invirtiendo la lista
    lista.invertir();
    lista.imprimir();

    Lista lista2;

    lista2.insertarInicio(1);
    lista2.insertarInicio(2);
    lista2.insertarInicio(3);
    lista2.insertarInicio(4);

    lista2.imprimir();

    //Concatenamos la lista 2 a la primera lista
    lista.concatenar(&lista2);

    lista.imprimir();

    //lista.eliminar(20);
    //lista.imprimir();

    /*
    Nodo* encontrado = lista.buscar(30);
    if (encontrado)
        cout << "Encontrado: " << encontrado->dato << endl;
    else
        cout << "No encontrado\n";
    */

    return 0;
}
