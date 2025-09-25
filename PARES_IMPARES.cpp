#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 10, 10, 5};
    int npar = 0;
    int nimpar = 0;
    int suma = 0;
    int contador = 0;
    float promedio = 0.0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 1) {
            nimpar++;
        }
        if (arr[i] % 2 == 0) {
            npar++;
            suma += arr[i];
            contador++;
            promedio = (float)suma / contador;
        }
    }

    cout << "Cantidad de numeros pares: " << npar << endl;
    cout << "Cantidad de numeros impares: " << nimpar << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
