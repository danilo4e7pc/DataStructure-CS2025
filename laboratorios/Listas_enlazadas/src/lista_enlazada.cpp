#include "lista_enlazada.h"

// Insertar al inicio
void Lista::insertarInicio(int valor) {
    Nodo* nuevo = new Nodo(valor);
    nuevo->sig = cabeza;
    cabeza = nuevo;
    tam++;   // aumentar tamaño
}

// Retirar del inicio
int Lista::retirarDeInicio(){

    if(cabeza == nullptr){

        cout<<"Lista vacia";
        return -1;
    }

    Nodo* temp = cabeza;
    int valor = temp->dato;
    cabeza = cabeza->sig;
    delete temp;
    tam--;
    return valor;
} 

// Insertar al final
void Lista::insertarFinal(int valor) {
    Nodo* nuevo = new Nodo(valor);
    if (!cabeza) {
        cabeza = nuevo;
        tam++;   // aumentar tamaño
        return;
    }
    Nodo* temp = cabeza;
    while (temp->sig) 
        temp = temp->sig;
    temp->sig = nuevo;
    tam++;   // aumentar tamaño
}

// Eliminar primera ocurrencia
void Lista::eliminar(int valor) {
    Nodo* temp = cabeza;
    Nodo* anterior = nullptr;

    while (temp && temp->dato != valor) {
        anterior = temp;
        temp = temp->sig;
    }

    if (!temp) return; // no encontrado

    if (!anterior) {
        cabeza = temp->sig;
    } else {
        anterior->sig = temp->sig;
    }
    delete temp;
    tam--;   // disminuir tamaño
}

// Buscar un valor
Nodo* Lista::buscar(int valor) {
    Nodo* temp = cabeza;
    while (temp) {
        if (temp->dato == valor) 
            return temp;
        temp = temp->sig;
    }
    return nullptr;
}

// Imprimir la lista
void Lista::imprimir() {
    Nodo* temp = cabeza;
    cout << "Lista (" << tam << " nodos): ";
    while (temp) {
        cout << temp->dato << " -> ";
        temp = temp->sig;
    }
    cout << "NULL\n";
}

// Liberar memoria, eliminar la lista
void Lista::liberar() {
    Nodo* temp = cabeza;
    while (temp) {
        Nodo* siguiente = temp->sig;
        delete temp;
        temp = siguiente;
    }
    cabeza = nullptr;
    tam = 0;   // reiniciar tamaño
}

// Obtener tamaño
int Lista::tamano() {
    return tam;
}

// Nuevo método: insertar en una posición específica
void Lista::AdicionaAPosicion(int dato, int posicion) {
    if (posicion <= 0) {
        insertarInicio(dato);
        return;
    }
    if (posicion >= tam) {
        insertarFinal(dato);
        return;
    }

    Nodo* nuevo = new Nodo(dato);
    Nodo* temp = cabeza;
    int indice = 0;

    // avanzar hasta el nodo anterior a la posición deseada
    while (temp && indice < posicion - 1) {
        temp = temp->sig;
        indice++;
    }

    // insertar en la posición
    nuevo->sig = temp->sig;
    temp->sig = nuevo;
    tam++;   // aumentar tamaño
}

// Retirar nodo de una posición específica, comienza en 0
int Lista::RetiraDePosicion(int posicion) {
    if (!cabeza) {
        cout << "La lista está vacía\n";
        return -1;
    }

    // Caso: eliminar en la cabeza
    if (posicion <= 0) {
        Nodo* temp = cabeza;
        int valor = temp->dato;
        cabeza = cabeza->sig;
        delete temp;
        tam--;   // disminuir tamaño
        return valor;
    }

    Nodo* temp = cabeza;
    int indice = 0;

    // Avanzar hasta el nodo anterior a la posición deseada
    while (temp && indice < posicion - 1) {
        temp = temp->sig;
        indice++;
    }

    // Si la posición es inválida
    if (!temp || !temp->sig) {
        cout << "Posición inválida\n";
        return -1;
    }

    Nodo* nodoEliminar = temp->sig;
    int valor = nodoEliminar->dato;

    // Saltar el nodo a eliminar
    temp->sig = nodoEliminar->sig;
    delete nodoEliminar;
    tam--;   // disminuir tamaño

    return valor;
};

void Lista::AdicionarEnOrden(int dato){

    Nodo* nuevo = new Nodo(dato);
    if(cabeza == nullptr || dato < cabeza->dato){

        nuevo->sig = cabeza;
        cabeza = nuevo;
        tam++;
    }

    Nodo* temp = cabeza;

    while(temp->sig && (temp->sig)->dato < dato){

        temp = temp->sig;
    }
    nuevo->sig = temp->sig;
    temp->sig = nuevo;
    tam++;
}

void Lista::invertir(){

    Lista lista2;
    int valor;
    Nodo* temp = cabeza;

    while(temp){

        valor = temp->dato;
        lista2.insertarInicio(valor);
        temp = temp->sig;
    }
    liberar();
    cabeza = lista2.cabeza;
    lista2.cabeza = nullptr;
    tam = lista2.tam;
}

void Lista::concatenar(struct Lista* lista2){

    Nodo* temp = cabeza;
    while (temp->sig) 
        temp = temp->sig;

    temp->sig = lista2->cabeza;
    tam += lista2->tam;
}