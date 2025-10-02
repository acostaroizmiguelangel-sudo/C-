#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(int a[], int j, int k) {
    int temp = a[j];
    a[j] = a[k];
    a[k] = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int j = low - 1;

    for (int k = low; k < high; k++) {
        if (arr[k] <= pivot) {
            j++;
            swap(arr, j, k);
        }
    }
    swap(arr, j + 1, high);
    return j + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {

    srand(static_cast<unsigned int>(time(0)));
    int numeros[20];

    for (int i = 0; i < 20; ++i) {
        numeros[i] = rand() % 100 + 1;
    }

    cout << "El arreglo antes de ordenarlo:" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    quicksort(numeros, 0, 19);
    int n = sizeof(numeros) / sizeof(numeros[0]);
    quicksort(numeros, 0, n - 1);

    cout << "El arreglo despues de ordenarlo:" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}