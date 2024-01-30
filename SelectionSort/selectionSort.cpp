#include <iostream>
using namespace std;

void selectionSort(int numeros[], int n ) {

    for (int i = 0; i < n-1; i++) {
        int posicaoMenor = i;
        for (int j = i+1; j < n; j++) {
            if (numeros[posicaoMenor] > numeros[j]){
                posicaoMenor = j;
            }
        }
        if (i != posicaoMenor) {
            //Swap
            
            // int aux = numeros[posicaoMenor];
            // numeros[posicaoMenor] = numeros[i];
            // numeros[i] = aux;
            
           swap(numeros[i], numeros[posicaoMenor]);
        }
    }

}

int main() {

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}