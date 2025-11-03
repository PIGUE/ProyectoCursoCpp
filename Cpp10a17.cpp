// PrimerPrograma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> // Librería de entrada y salida

using namespace std; // Usar el espacio de nombres estándar

int main(void) { // Función principal del programa
    int ValorN1 = 100; // Declarar e inicializar una variable entera
    int ValorN2 = 200;

    cout << "It's me, your first program. "; // Imprimir mensaje en la consola
    cout << "It's me, your second program. ";
    cout << endl;
    cout << "It's me,\n your third program. "; // \n para nueva línea

    cout << ValorN1 << endl; // endl para nueva línea
    cout << ValorN2 << endl;

    int i, j; // Declarar dos variables enteras

    i = 4; // Asignar valor a i
    j = 2 * ++i;
    cout << i << endl; // Imprimir valor de i
    cout << j << endl; // Imprimir valor de j
    i = 2 * --j; // Asignar nuevo valor a i
    cout << i << endl; // Imprimir valor de i
    cout << j << endl; // Imprimir valor de j

    return 0; // Indicar que el programa terminó correctamente
}
