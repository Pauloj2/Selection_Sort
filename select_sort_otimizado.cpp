#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    int posicao;

    for (int i = 0; i < n - 1; i++) {
        posicao = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[posicao]) {
                posicao = j;
            }
        }
        if (posicao != i) {
            int aux = arr[posicao];
            arr[posicao] = arr[i];
            arr[i] = aux;
        }
    }
}

void exibirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {40, 1, 23, 20, 67, 44, 9, 18, 0, 99};
    int n = 10;

    cout << "Vetor antes de ordenar:\n";
    exibirVetor(arr, n);
    cout << endl;

    selectionSort(arr, n);

    cout << "Vetor depois de ordenar com Selection Sort:\n";
    exibirVetor(arr, n);

    return 0;
}
