#include <iostream>
using namespace std;

void burbuja(int lista[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
}

int main() {
    int datos[5];

    cout << "Hola, ingrese 5 números y serán ordenados:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> datos[i];
    }

    cout << "\nEstos son los datos antes de ordenar:\n";
    for (int i = 0; i < 5; i++) {
        cout << datos[i] << " ";
    }

    burbuja(datos, 5);

    cout << "\nEstos son los datos después de ordenar:\n";
    for (int i = 0; i < 5; i++) {
        cout << datos[i] << " ";
    }

    return 0;
}
