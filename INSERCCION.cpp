#include <iostream>
using namespace std;

void inserccion(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && temp < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {
    int a[] = {70, 15, 2, 51, 60};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Esta es la lista antes de ordenarla:\n";
    printArr(a, n);
    inserccion(a, n);
    cout << "\nLa lista despues de ordenarla:\n";
    printArr(a, n);

    return 0;
}
