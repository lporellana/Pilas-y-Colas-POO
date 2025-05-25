#include <iostream>

using namespace std;

// PARTE A
/**
 * @brief Clase Nodo
 * @param dato para guardar el valor del nodo
 * @param siguiente para guardar la dirección del siguiente nodo
 * @details Esta clase representa un nodo de una lista enlazada simple.
 */

class Nodo {
    public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = nullptr;
    }
};

//PARTE B
/**
 * @brief Clase Lista
 * @details Esta clase representa una lista enlazada simple.
 */
class Lista {
    private:
    Nodo* cabeza;

    public:
    Lista() {
        cabeza = nullptr;
    }

//PARTE C: Agegar nodos al final
/**
 * @brief Agregar un nodo al final de la lista
 * @param valor para guardar el valor del nodo 
 */
    void agregarAlFinal(int valor){
    Nodo* nuevoNodo = new Nodo(valor);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
        }
    }

//PARTE D: Eliminar el primer nodo
/**
 * @brief eliminar el primer nodo de la lista
 * @param
 */
    void eliminarPrimerNodo(){
        if (cabeza != nullptr) {
            Nodo* nodoAEliminar = cabeza;
            cabeza = cabeza->siguiente;
            delete nodoAEliminar;
        }
    }

//PARTE E: Mostrar Nodos    
/** 
 * @brief mostrar los nodos de la lista
 * @param
 */
    void mostrarNodos(){
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            cout << actual->dato << " ";
            actual = actual->siguiente;
        }
        cout << endl;
    }
};

int main() {
        // 1. Crea una lista.
    Lista miLista;
    cout << "--- Inicio del Programa ---" << endl;
    miLista.mostrarNodos(); // Mostrar lista vacía al inicio

    // 2. Agrega 3 nodos con los valores que tú elijas.
    cout << "\nAgregando nodos: 5, 15, 25" << endl;
    miLista.agregarAlFinal(5);
    miLista.agregarAlFinal(15);
    miLista.agregarAlFinal(25);

    // 3. Muestra la lista.
    
    cout << "Después de agregar 3 nodos:" << endl;
    miLista.mostrarNodos();

    // 4. Elimina el primer nodo.
    
    cout << "\nEliminando el primer nodo..." << endl;
    miLista.eliminarPrimerNodo(); // Debería eliminar el '5'

    // 5. Muestra la lista nuevamente.
    
    cout << "Después de eliminar el primer nodo:" << 
    endl;
    miLista.mostrarNodos();
    
    cout << "\nAgregando un nuevo nodo (35) al final..." << endl;
    miLista.agregarAlFinal(35);
    miLista.mostrarNodos();

    cout << "\nEliminando otro nodo..." << endl;
    miLista.eliminarPrimerNodo(); // Debería eliminar el '15'
    miLista.mostrarNodos();
    
    cout << "\nEliminando el último nodo restante..." << endl;
    miLista.eliminarPrimerNodo(); // Debería eliminar el '25'
    miLista.mostrarNodos();
    
    cout << "\nIntentando eliminar de una lista vacía..." << endl;
    miLista.eliminarPrimerNodo(); // Esto debería mostrar el mensaje de error

    cout << "--- Fin del Programa ---" << std::endl;
    return 0; // Indica que el programa finalizó correctamente
    }