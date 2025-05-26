#include <iostream>

using namespace std;

// PASO 1
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

//PASO 2 
/**
 * @brief Clase Pila
 * @details Crea el puntero de tipo nodo llamado cabeza.
 */

class Pila{
    public:
    Nodo* cabeza; 

    Pila(){
        cabeza = nullptr;
    }

//PASO 3
void push(int valor){
    Nodo* nuevoNodo = new Nodo(valor);
    nuevoNodo->siguiente = cabeza;
    cabeza = nuevoNodo;
    }

//PASO 4
/**
 * @brief Metodo pop
 * @details Verificará si la pila está vacía y eliminará el nodo de la parte superior.
 */
void pop() {   //prueba para modificar el puntero cabeza
    if (cabeza== nullptr) {
        cout << "La pila está vacía. No se puede eliminar un nodo." << endl;
        return;
    }
    Nodo* nodoAEliminar = cabeza;
    cabeza = cabeza->siguiente;
    delete nodoAEliminar;
    cout << "Nodo eliminado." << endl;
    }

//PASO 5
/**
 * @brief Motodo mostrar
 * @details Muestra los nodos de la pila desde el más reciente hasta el más antiguo.
 */
void mostrarNodos() {
    Nodo* actual = cabeza;
    if (actual == nullptr) {
        cout << "La pila está vacía." << endl;
        return;    
    }
    cout << "Contenido de la pila: ";
    while (actual != nullptr) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
        }
    }
};
//CONSTRUIR UNA CLASE COLA
//PASO 1 : Reutilizar la clase nodo

//PASO 2 : Crear la clase Cola
class Cola{
    public:
    Nodo* frente;
    Nodo* final;

    Cola(){
        frente = nullptr;
        final = nullptr;
    }

//PASO 3 : Crear el método push
void push(int valor){
    Nodo* nuevoNodo = new Nodo(valor);
    if (final == nullptr) {
        frente = nuevoNodo;
        final = nuevoNodo;
    } else {
        final->siguiente = nuevoNodo;
        final = nuevoNodo;  
        }
    }
};

//PASO 4 : Crear el método pop
void pop(){
    
}

//PASO 6
/**
 * @brief Main
 * @details 
 */
int main() {
    Pila miLista; // Crear una instancia de la clase Pila
    // 1. Crea una lista enlazada simple.

    cout << "--- Inicio del Programa ---" << endl;
    miLista.mostrarNodos(); // Mostrar lista vacía al inicio

    // 2. Agrega 3 nodos con los valores que tú elijas.
    cout << "\nAgregando nodos: 5, 15, 25" << endl;
    miLista.push(5);
    miLista.push(15);
    miLista.push(25);

    // 3. Muestra la lista.
    
    cout << "Después de agregar 3 nodos:" << endl;
    miLista.mostrarNodos();

    // 4. Elimina el primer nodo.
    
    cout << "\nEliminando el primer nodo..." << endl;
    miLista.pop(); // Debería eliminar el '5'

    // 5. Muestra la lista nuevamente.
    
    cout << "Después de eliminar el primer nodo:" << 
    endl;
    miLista.mostrarNodos();
    
    cout << "--- Fin del Programa ---" << std::endl;
    return 0; // Indica que el programa finalizó correctamente
    }