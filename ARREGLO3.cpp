#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    cout << "Valores que están en el arreglo:\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << "Índice " << i << " : " << arr[i] << endl;
    }

    int n, posi;
    cout << "¿Qué número quieres ingresar? ";
    cin >> n;
    cout << "¿En qué posición quieres que lo ponga? ";
    cin >> posi;

    arr.insert(arr.begin() + posi, n);

    cout << "\nYa actualizado:\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << "Índice " << i << " : " << arr[i] << endl;
    }

    return 0;
}
