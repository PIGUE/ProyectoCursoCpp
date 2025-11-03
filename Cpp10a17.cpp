// PrimerPrograma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*
De esta manera se incluen comentarios de múltiples líneas
comentarios de múltiples líneas
*/

#include <iostream> // Librería de entrada y salida

using namespace std; // Usar el espacio de nombres estándar

int main(void) { // Función principal del programa
    int ValorN1 = 100; // Declarar e inicializar una variable entera
    int ValorN2 = 200;

    cout << "Soy yo tu primer programa. "; // Imprimir mensaje en la consola
    cout << "It's me, your second program. ";
    cout << endl;
    cout << "It's me,\n your third program. "; // \n para nueva línea

    cout << ValorN1 << endl; // endl para nueva línea
    cout << ValorN2 << endl;

    int octal25, Hexadecimal100, i , j; // Declarar variables enteras
	float flotante =12.152; // Declarar variable de punto flotante
    octal25 = 025; // Asignar valor octal (equivalente a 21 decimal)
	Hexadecimal100 = 0x100; // Asignar valor hexadecimal (equivalente a 256 decimal)
    cout << octal25 << endl; 
    cout << Hexadecimal100 << endl;
    cout << flotante << endl;
    i = 4; // Asignar valor a i
    j = 2 * ++i;
    cout << i << endl; // Imprimir valor de i
    cout << j << endl; // Imprimir valor de j
    i = 2 * --j; // Asignar nuevo valor a i
    cout << i << endl; // Imprimir valor de i
    cout << j << endl; // Imprimir valor de j

    return 0; // Indicar que el programa terminó correctamente
}
