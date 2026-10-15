#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0, cantidad = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            suma = suma + i;
            cantidad = cantidad + 1;
        }
    }

    cout << "Suma de los numeros impares hasta " << numero << ": " << suma << '\n';
    cout << "Cantidad de numeros impares: " << cantidad << '\n';

}
